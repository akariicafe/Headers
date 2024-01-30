@class NSString;

@interface HRAccountTimelineButtonCell : UITableViewCell {
    void /* unknown type, empty encoding */ buttonText;
    void /* unknown type, empty encoding */ explanationText;
    void /* unknown type, empty encoding */ $__lazy_storage_$_buttonLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_explanationLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_separatorView;
    void /* unknown type, empty encoding */ customConstraints;
}

@property (class, nonatomic, readonly) NSString *reuseIdentifier;

@property (nonatomic, copy) NSString *buttonText;
@property (nonatomic, copy) NSString *explanationText;
@property (nonatomic) void /* unknown type, empty encoding */ roundBottomCorners;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
