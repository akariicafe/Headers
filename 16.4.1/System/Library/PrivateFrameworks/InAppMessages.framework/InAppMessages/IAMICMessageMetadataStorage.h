@class NSString, ICInAppMessageManager;

@interface IAMICMessageMetadataStorage : NSObject <IAMMessageMetadataStorage> {
    ICInAppMessageManager *_iTunesCloudIAMManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
