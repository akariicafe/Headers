@interface PUImageRequesterChange : NSObject

@property (nonatomic, setter=_setImageDidChange:) BOOL imageDidChange;
@property (nonatomic, setter=_setImageIsFullQualityDidChange:) BOOL imageIsFullQualityDidChange;
@property (nonatomic, setter=_setFullsizeImageDataDidChange:) BOOL fullsizeImageDataDidChange;
@property (nonatomic, setter=_setFullsizeImageURLDidChange:) BOOL fullsizeImageURLDidChange;
@property (nonatomic, setter=_setImageIsHigherQualityDidChange:) BOOL imageIsHigherQualityDidChange;
@property (readonly, nonatomic) BOOL changed;

@end
