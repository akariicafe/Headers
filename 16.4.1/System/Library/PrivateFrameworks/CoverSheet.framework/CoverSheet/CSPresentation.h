@class NSString, NSMutableArray, NSArray;
@protocol UICoordinateSpace;

@interface CSPresentation : NSObject <CSPresentationProviding, UICoordinateSpace, NSCopying>

@property (weak, nonatomic) id<UICoordinateSpace> coordinateSpace;
@property (readonly, copy, nonatomic) NSMutableArray *regions;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, weak, nonatomic) id<UICoordinateSpace> presentationCoordinateSpace;
@property (readonly, copy, nonatomic) NSArray *presentationRegions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

+ (id)presentationWithCoordinateSpace:(id)a0;
+ (id)presentationForProvider:(id)a0;
+ (id)presentation;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toCoordinateSpace:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)intersectsCoordinateSpace:(id)a0;
- (id)succinctDescriptionBuilder;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromCoordinateSpace:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromCoordinateSpace:(id)a1;
- (id)firstRegionIntersectingCoordinateSpace:(id)a0 excludingRegionsWithRole:(long long)a1;
- (id)presentationForRole:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toCoordinateSpace:(id)a1;
- (id)regionsIntersectingCoordinateSpace:(id)a0;
- (void)unionPresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)addRegions:(id)a0;
- (id)firstRegionIntersectingCoordinateSpace:(id)a0;
- (void)addRegion:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })suggestedInsetsForPreferredContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
