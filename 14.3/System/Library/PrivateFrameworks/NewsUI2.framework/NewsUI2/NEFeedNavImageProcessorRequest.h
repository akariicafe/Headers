@class NSDictionary, NSString;

@interface NEFeedNavImageProcessorRequest : NSObject <TSProcessedImageRequestType> {
    void /* unknown type, empty encoding */ assetHandles;
    void /* unknown type, empty encoding */ feedNavImageSize;
    void /* unknown type, empty encoding */ scale;
    void /* unknown type, empty encoding */ cornerRadius;
}

@property (nonatomic, copy) NSDictionary *assetHandles;
@property (nonatomic, readonly) NSString *cacheIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFeedNavImageAssetHandle:(id)a0 feedNavImageSize:(struct CGSize { double x0; double x1; })a1 feedNavImageStyler:(id)a2 scale:(double)a3;

@end
