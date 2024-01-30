@class NSString;

@interface CPFeatureFlags : NSObject <CPFeatureFlags>

@property (readonly, nonatomic) BOOL qrPluginEnabled;
@property (readonly, nonatomic) BOOL qrPluginEncryptionEnabled;
@property (readonly, nonatomic) BOOL expanseParticipantIDHashed;
@property (readonly, nonatomic) BOOL expanseEnabled;
@property (readonly, nonatomic) BOOL expanseTopicStateEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
