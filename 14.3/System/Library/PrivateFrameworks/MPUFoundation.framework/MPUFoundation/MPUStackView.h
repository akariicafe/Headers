@class UIWindow, NSString, UIView, NSMutableArray;
@protocol MPUStackViewDataSource;

@interface MPUStackView : UIView {
    struct { struct CGSize { double width; double height; } baseSize; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds; struct CGPoint { double x; double y; } centerInLocalCoordinates; BOOL forcesIntegralX; BOOL forcesIntegralY; struct UIOffset { double horizontal; double vertical; } maximumRelativeOffsetStep; double scale; struct CGSize { double width; double height; } sizeInsetStep; struct CGPoint { double x; double y; } vanishingPoint; } _configuration;
    long long _distanceIgnoreCount;
    UIWindow *_window;
}

@property (nonatomic) struct CGSize { double x0; double x1; } baseSize;
@property (weak, nonatomic) id<MPUStackViewDataSource> dataSource;
@property (nonatomic) BOOL forcesIntegralX;
@property (nonatomic) BOOL forcesIntegralY;
@property (readonly, nonatomic) Class itemClass;
@property (readonly, nonatomic) NSString *itemReuseIdentifier;
@property (readonly, nonatomic) NSMutableArray *items;
@property (nonatomic) struct UIOffset { double x0; double x1; } maximumRelativeOffsetStep;
@property (readonly, nonatomic) long long numberOfItems;
@property (weak, nonatomic) UIView *perspectiveTargetView;
@property (nonatomic) struct CGSize { double x0; double x1; } sizeInsetStep;
@property (nonatomic) struct CGPoint { double x0; double x1; } vanishingPoint;

- (void)reloadData;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)itemAtIndex:(long long)a0;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateForChangedDistanceFromVanishingPoint;
- (void)_updateGeometryFieldsInConfiguration;
- (void)reloadDataWithTransition:(long long)a0;
- (id)_dequeueReusableItem;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 itemClass:(Class)a1 itemReuseIdentifier:(id)a2;
- (void)beginIgnoringDistanceUpdates;
- (void)endIgnoringDistanceUpdates;
- (struct UIOffset { double x0; double x1; })relativeOffsetOfItemAtIndex:(double)a0 withCenter:(struct CGPoint { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })sizeOfItemAtIndex:(double)a0;

@end
