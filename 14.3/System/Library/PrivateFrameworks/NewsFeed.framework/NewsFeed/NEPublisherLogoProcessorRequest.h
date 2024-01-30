@class NSDictionary, NSString;

@interface NEPublisherLogoProcessorRequest : NSObject <TSProcessedImageRequestType> {
    void /* unknown type, empty encoding */ assetHandles;
    void /* unknown type, empty encoding */ publisherLogoImageSize;
    void /* unknown type, empty encoding */ scale;
    void /* unknown type, empty encoding */ theme;
    void /* unknown type, empty encoding */ options;
}

@property (nonatomic, copy) NSDictionary *assetHandles;
@property (nonatomic, readonly) NSString *cacheIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPublisherLogoAssetHandle:(id)a0 publisherLogoImageSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 theme:(long long)a3;

@end
