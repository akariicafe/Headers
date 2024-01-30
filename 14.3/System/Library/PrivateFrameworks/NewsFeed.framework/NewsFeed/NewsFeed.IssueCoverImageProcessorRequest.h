@class NSDictionary, NSString;

@interface NewsFeed.IssueCoverImageProcessorRequest : _TtCs12_SwiftObject <TSProcessedImageRequestType> {
    void /* unknown type, empty encoding */ assetHandles;
    void /* unknown type, empty encoding */ size;
    void /* unknown type, empty encoding */ scale;
    void /* unknown type, empty encoding */ corners;
}

@property (nonatomic, copy) NSDictionary *assetHandles;
@property (nonatomic, readonly) NSString *cacheIdentifier;

@end
