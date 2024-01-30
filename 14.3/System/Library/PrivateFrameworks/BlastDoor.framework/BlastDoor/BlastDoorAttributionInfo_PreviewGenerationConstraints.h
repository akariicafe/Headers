@class NSString;

@interface BlastDoorAttributionInfo_PreviewGenerationConstraints : NSObject {
    void /* unknown type, empty encoding */ attributionInfo_PreviewGenerationConstraints;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL has_maxPixelWidth;
@property (nonatomic, readonly) double maxPixelWidth;
@property (nonatomic, readonly) BOOL has_minThumbSizeHeight;
@property (nonatomic, readonly) double minThumbSizeHeight;
@property (nonatomic, readonly) BOOL has_minThumbSizeWidth;
@property (nonatomic, readonly) double minThumbSizeWidth;
@property (nonatomic, readonly) BOOL has_scale;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) BOOL isSticker;

- (id)init;

@end
