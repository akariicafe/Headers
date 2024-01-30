@class NSDictionary, NSOrderedSet, NSString;

@interface PXPhotosDetailsFloatingCardLayout : NSObject <PXFloatingCardLayout>

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _containerBounds;
@property (readonly, nonatomic) NSDictionary *identifiersForHeight;
@property (readonly, nonatomic) NSDictionary *heightsForIdentifier;
@property (readonly, nonatomic) NSOrderedSet *snappableHeights;
@property (readonly, nonatomic) double initialHeight;
@property (readonly, nonatomic) unsigned long long initialPosition;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } insets;
@property (readonly, nonatomic) BOOL canDrag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_configureForPhotosDetailsViewController:(id)a0 composition:(id)a1;
- (void)didUpdateCardHeight:(double)a0;
- (void)didUpdateCardPosition:(unsigned long long)a0;
- (id)initWithPhotosDetailsUIViewController:(id)a0 widgetComposition:(id)a1;

@end
