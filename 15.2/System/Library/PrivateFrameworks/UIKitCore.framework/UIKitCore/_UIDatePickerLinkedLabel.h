@class UIFont, NSString, NSArray, NSMapTable, _UIDatePickerLinkedLabelStorage, NSDictionary, UILayoutGuide, NSLayoutConstraint, UILabel, UIColor;

@interface _UIDatePickerLinkedLabel : UIView <UIContentSizeCategoryAdjusting> {
    struct { unsigned char needsStorageSync : 1; } _flags;
    UILabel *_renderingLabel;
    struct CGSize { double width; double height; } _lastSize;
    NSMapTable *_longestPossibleTitle;
    NSMapTable *_longestPossibleWidth;
    NSLayoutConstraint *_renderLabelXConstraint;
}

@property (retain, nonatomic) _UIDatePickerLinkedLabelStorage *storage;
@property (readonly, nonatomic) UILayoutGuide *contentLayoutGuide;
@property (retain, nonatomic) NSArray *titles;
@property (retain, nonatomic) NSArray *possibleTitles;
@property (retain, nonatomic) NSDictionary *overrideAttributes;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) double minimumScaleFactor;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL textColorFollowsTintColor;
@property (nonatomic) long long textAlignment;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setContentCompressionResistancePriority:(float)a0 forAxis:(long long)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentHuggingPriority:(float)a0 forAxis:(long long)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_storageSync;
- (void)_setNeedsStorageSync;
- (void)_storageSyncIfNecessary;
- (void)_updateAlignmentConstraint;
- (id)_longestPossibleTitleForPriority:(unsigned long long)a0 width:(double *)a1;
- (void)_invalidatePossibleTitleCaches;

@end
