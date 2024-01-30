@interface WKSelectPickerGroupHeaderView : UIView {
    struct RetainPtr<UILabel> { void *m_ptr; } _label;
    struct RetainPtr<UIImageView> { void *m_ptr; } _collapseIndicatorView;
    struct WeakObjCPtr<WKSelectPickerTableViewController> { id m_weakReference; } _tableViewController;
    BOOL _collapsed;
}

@property (readonly, nonatomic) long long section;

+ (double)preferredHeight;
+ (id)preferredFont;
+ (double)preferredMargin;

- (void).cxx_destruct;
- (void)setTableViewController:(id)a0;
- (void)didTapHeader:(id)a0;
- (void)setCollapsed:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithGroupName:(id)a0 section:(long long)a1;
- (id).cxx_construct;

@end
