@class NSTimer, NSString, NSArray, MKMapItem, UIImageView, NSMutableArray, _MKUILabel, CLLocation, MKLocationManager, UIColor;
@protocol _MKResultViewDelegate;

@interface _MKResultView : UIView <MKLocationManagerObserver> {
    NSArray *_mapItems;
    int _layoutType;
    id<_MKResultViewDelegate> delegate;
    BOOL _selected;
    BOOL _showsDistance;
    NSMutableArray *_resultConstraints;
    MKLocationManager *_locManager;
    NSString *_primaryLabelText;
    NSString *_secondaryLabelText;
    NSTimer *_refLocationTimer;
}

@property (retain, nonatomic) _MKUILabel *nameLabel;
@property (retain, nonatomic) _MKUILabel *secondaryLabel;
@property (retain, nonatomic) _MKUILabel *tertiaryLabel;
@property (nonatomic) BOOL useSpotlightVibrancy;
@property (nonatomic) double fallbackDistance;
@property (nonatomic) BOOL alwaysUsesBusinessLayout;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) int iconFormat;
@property (weak, nonatomic) id<_MKResultViewDelegate> delegate;
@property (readonly, nonatomic) double preferredHeight;
@property (retain, nonatomic) UIColor *primaryTextColor;
@property (retain, nonatomic) UIColor *secondaryTextColor;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (retain, nonatomic) NSString *primaryLabelText;
@property (retain, nonatomic) NSString *secondaryLabelText;
@property (retain, nonatomic) NSArray *mapItems;
@property (retain, nonatomic) CLLocation *referenceLocation;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL showsDistance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresConstraintBasedLayout;

- (void)updateLayout;
- (void)_contentSizeCategoryDidChange;
- (void)_updateColors;
- (void)locationManagerDidPauseLocationUpdates:(id)a0;
- (void)_commonInit;
- (id)initWithMapItem:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_imageSize;
- (void)locationManagerDidResumeLocationUpdates:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)locationManager:(id)a0 didUpdateVehicleSpeed:(double)a1 timestamp:(id)a2;
- (void)dealloc;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)init;
- (void)locationManager:(id)a0 didUpdateVehicleHeading:(double)a1 timestamp:(id)a2;
- (void).cxx_destruct;
- (void)setNeedsUpdateConstraints;
- (void)locationManagerUpdatedLocation:(id)a0;
- (void)updateImageView;
- (void)_cancelReferenceLocationTimer;
- (id)_defaultPrimaryLabel;
- (id)_defaultSecondaryCategoryLabel;
- (double)_expectedHeightForLabels;
- (void)_fireReferenceLocationTimer;
- (id)_labelWithFontSize:(double)a0;
- (void)_locationApprovalDidChange;
- (unsigned long long)_maxNameLengthForEndingString:(id)a0;
- (unsigned long long)_maxSecondaryStringLengthForEndingString:(id)a0;
- (void)_updateFontSizing;
- (void)_updateLayoutForAddress;
- (void)_updateLayoutForBusinessOrCategory;
- (void)_updatePrimaryColors;
- (void)_updateSecondaryColors;
- (void)addLabelIfNecessary:(id)a0;
- (void)handleTap:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 highlightsOnTouch:(BOOL)a1;
- (id)initWithMapItems:(id)a0 primaryLabelText:(id)a1;
- (void)locationManagerDidReset:(id)a0;
- (void)locationManagerFailedToUpdateLocation:(id)a0 withError:(id)a1;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)a0;
- (void)updateSubviews;

@end
