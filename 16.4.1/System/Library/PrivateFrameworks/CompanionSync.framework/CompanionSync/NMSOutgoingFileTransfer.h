@class NMSMessageCenter, NSString, NSDictionary, NSURL, NSSet;

@interface NMSOutgoingFileTransfer : NSObject <NMSDeviceTargetable, NMSObfuscatableDescriptionProviding>

@property (weak, nonatomic) NMSMessageCenter *messageCenter;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) id pbHeaderInfo;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) double sendTimeout;
@property (retain, nonatomic) NSDictionary *persistentUserInfo;
@property (retain, nonatomic) NSDictionary *extraIDSOptions;
@property (copy, nonatomic) NSSet *targetDeviceIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)CPObfuscatedDescriptionObject;

@end
