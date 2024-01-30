@class NSArray, NAFuture, NSString, CPPointsOfInterestEntity, CPBarButton;
@protocol CPPointOfInterestTemplateDelegate;

@interface CPPointOfInterestTemplate : CPTemplate <NSSecureCoding, CPEntityProviding, CPEntityClientTemplateDelegate, CPBarButtonProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CPPointsOfInterestEntity *poiEntity;
@property (retain, nonatomic) NSArray *pointsOfInterest;
@property (retain, nonatomic) NAFuture *templateProviderFuture;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long selectedIndex;
@property (weak, nonatomic) id<CPPointOfInterestTemplateDelegate> pointOfInterestDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *leadingNavigationBarButtons;
@property (retain, nonatomic) NSArray *trailingNavigationBarButtons;
@property (retain, nonatomic) CPBarButton *backButton;

- (void)encodeWithCoder:(id)a0;
- (id)entity;
- (id)initWithCoder:(id)a0;
- (void)performUpdate;
- (id)title;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (id)_pointOfInterestWithIdentifier:(id)a0;
- (void)handleActionForControlIdentifier:(id)a0;
- (void)handleDidSelectPointOfInterestWithIdentifier:(id)a0;
- (void)handleMapRegionDidChange:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)initWithTitle:(id)a0 pointsOfInterest:(id)a1 selectedIndex:(unsigned long long)a2;
- (id)pointsOfInterest;
- (void)setPointsOfInterest:(id)a0;
- (void)setPointsOfInterest:(id)a0 selectedIndex:(unsigned long long)a1;

@end
