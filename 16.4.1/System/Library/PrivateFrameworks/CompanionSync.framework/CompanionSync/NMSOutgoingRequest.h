@class NMSMessageCenter, NSString, NSDictionary, NSData, NSSet;

@interface NMSOutgoingRequest : NSObject <NMSDeviceTargetable, NMSObfuscatableDescriptionProviding>

@property (weak, nonatomic) NMSMessageCenter *messageCenter;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (retain, nonatomic) id pbRequest;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned short messageID;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) double sendTimeout;
@property (nonatomic) double responseTimeout;
@property (nonatomic) BOOL shouldEncrypt;
@property (retain, nonatomic) NSDictionary *persistentUserInfo;
@property (retain, nonatomic) NSDictionary *extraIDSOptions;
@property (copy, nonatomic) NSSet *targetDeviceIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestWithMessageID:(unsigned short)a0;

@end
