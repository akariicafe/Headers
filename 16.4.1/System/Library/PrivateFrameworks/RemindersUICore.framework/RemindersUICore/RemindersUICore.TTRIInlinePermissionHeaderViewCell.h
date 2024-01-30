@interface RemindersUICore.TTRIInlinePermissionHeaderViewCell : NUITableViewContainerCell <NUIContainerViewDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_iconView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bodyLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dismissButton;
    void /* unknown type, empty encoding */ appliedConfiguration;
}

@property (class, nonatomic, readonly) Class containerViewClass;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)containerViewDidLayoutArrangedSubviews:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
