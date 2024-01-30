@class NMSMessageCenter, NSString, NMSOutgoingResponse, NSData, IDSMessageContext, NSObject;
@protocol OS_os_transaction;

@interface NMSIncomingRequest : NSObject <NMSDeviceSourced, NMSObfuscatableDescriptionProviding>

@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (weak, nonatomic) NMSMessageCenter *messageCenter;
@property (nonatomic) unsigned short messageID;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) BOOL expectsResponse;
@property (retain, nonatomic) id pbRequest;
@property (retain, nonatomic) NMSOutgoingResponse *response;
@property (retain, nonatomic) NSString *sourceDeviceID;
@property (retain, nonatomic) IDSMessageContext *idsContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)allowsUnrepliedRequestsForUnitTesting;
+ (void)setAllowsUnrepliedRequestsForUnitTesting:(BOOL)a0;

- (id)CPObfuscatedDescriptionObject;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)configureResponse;

@end
