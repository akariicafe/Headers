@class NSString;

@interface GKMacGameIconBrush : GKImageBrush <GKBrushIdentification>

@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })sizeForInput:(id)a0;
- (id)renderedImageIdentifier;

@end
