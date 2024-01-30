@class NSDictionary, NSString;

@interface NewsFeed.FormatImageRequest : NSObject <TSProcessedImageRequestType> {
    void /* unknown type, empty encoding */ size;
    void /* unknown type, empty encoding */ scale;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ inventory;
    void /* unknown type, empty encoding */ focalFrame;
    void /* unknown type, empty encoding */ renderingMode;
    void /* unknown type, empty encoding */ traitCollection;
    void /* unknown type, empty encoding */ assetHandles;
    void /* unknown type, empty encoding */ assetHandle;
}

@property (nonatomic, readonly) NSDictionary *assetHandles;
@property (nonatomic, readonly) NSString *cacheIdentifier;

- (id)init;
- (void).cxx_destruct;

@end
