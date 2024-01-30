@protocol NUVideoProperties;

@interface NUJSVideoProperties : NUJSProxy <NUJSVideoPropertiesExport>

@property (readonly) id<NUVideoProperties> videoProperties;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cleanAperture;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } originalCleanAperture;
@property (readonly) struct CGSize { double x0; double x1; } originalSize;

- (BOOL)containsMetadata:(id)a0;
- (id)initWithRepresentedObject:(id)a0 context:(id)a1;
- (id)initWithVideoProperties:(id)a0 context:(id)a1;

@end
