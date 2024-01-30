@class NSString;

@interface HRConceptHeaderCell : WDMedicalRecordGroupableCell {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ chevronView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomConstraint;
    void /* unknown type, empty encoding */ title;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ headerImage;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) void /* unknown type, empty encoding */ categoryColor;
@property (nonatomic) long long intendedPlacement;

+ (id)defaultReuseIdentifier;

- (void)_updateForCurrentSizeCategory;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)setUpConstraints;

@end
