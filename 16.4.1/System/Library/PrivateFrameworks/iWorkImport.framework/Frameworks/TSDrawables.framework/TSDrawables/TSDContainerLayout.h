@class NSObject;
@protocol TSDContainerInfo;

@interface TSDContainerLayout : TSDLayout

@property (readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;

- (id)initWithInfo:(id)a0;
- (void)processChangedProperty:(int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })baseFrameForFrameForCullingWithAdditionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)childInfosForChildLayouts;

@end
