@class NSSet, NSString, NSDictionary, NSData, IDSMessageContext, NSObject, NMSIncomingRequest;
@protocol OS_os_transaction;

@interface NMSOutgoingResponse : NSObject <NMSDeviceTargetable, NMSObfuscatableDescriptionProviding>

@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (weak, nonatomic) NMSIncomingRequest *request;
@property (getter=isSent) BOOL sent;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (retain, nonatomic) id pbResponse;
@property (retain, nonatomic) IDSMessageContext *idsContext;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) double sendTimeout;
@property (retain, nonatomic) NSDictionary *persistentUserInfo;
@property (retain, nonatomic) NSDictionary *extraIDSOptions;
@property (copy, nonatomic) NSSet *targetDeviceIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)send;
- (id)CPObfuscatedDescriptionObject;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)_makePBResponse;

@end
