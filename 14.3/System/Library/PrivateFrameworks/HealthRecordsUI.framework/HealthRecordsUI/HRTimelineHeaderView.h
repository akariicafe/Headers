@class NSString;

@interface HRTimelineHeaderView : UITableViewHeaderFooterView {
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subtitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundEffectView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_separatorView;
}

@property (class, nonatomic, readonly) NSString *reuseIdentifier;

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) BOOL floating;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)applyStyleFromNavigationBar:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)applyTitle:(id)a0 subtitle:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithReuseIdentifier:(id)a0;

@end
