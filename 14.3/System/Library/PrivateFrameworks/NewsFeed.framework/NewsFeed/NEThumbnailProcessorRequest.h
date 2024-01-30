@class NSDictionary, NSString;

@interface NEThumbnailProcessorRequest : NSObject <TSProcessedImageRequestType> {
    void /* unknown type, empty encoding */ assetHandles;
    void /* unknown type, empty encoding */ thumbnailFrame;
    void /* unknown type, empty encoding */ focalFrame;
    void /* unknown type, empty encoding */ scale;
    void /* unknown type, empty encoding */ roundedCorners;
    void /* unknown type, empty encoding */ cornerRadius;
    void /* unknown type, empty encoding */ border;
}

@property (nonatomic, readonly) NSDictionary *assetHandles;
@property (nonatomic, readonly) NSString *cacheIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)initWithThumbnailAssetHandle:(id)a0 thumbnailFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 focalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 scale:(double)a3 byRoundingCorners:(unsigned long long)a4 cornerRadius:(double)a5;

@end
