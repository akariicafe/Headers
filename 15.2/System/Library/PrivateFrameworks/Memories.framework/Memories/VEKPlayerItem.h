@class AltClipCollection, OrientationInfo;

@interface VEKPlayerItem : AVPlayerItem

@property (retain, nonatomic) AltClipCollection *altInfo;
@property (weak, nonatomic) OrientationInfo *currentAltInfo;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, nonatomic) BOOL isRotated;
@property (readonly, nonatomic) double aspect;

- (void).cxx_destruct;

@end
