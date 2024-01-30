@class NSString;

@interface GKCircleImageBrush : GKImageBrush <GKBrushIdentification>

@property (nonatomic) struct CGSize { double width; double height; } sizeOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
