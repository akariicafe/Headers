@class NSString, NSURL;
@protocol VLLocalizationDataProviderDelegate;

@interface VLFilesystemDataProvider : NSObject <VLLocalizationDataProvider> {
    NSURL *_baseDirectory;
}

@property (weak, nonatomic) id<VLLocalizationDataProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
