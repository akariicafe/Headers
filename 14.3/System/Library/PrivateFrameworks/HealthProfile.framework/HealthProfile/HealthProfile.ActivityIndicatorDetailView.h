@interface HealthProfile.ActivityIndicatorDetailView : UIView <UITextViewDelegate> {
    void /* unknown type, empty encoding */ action;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ titleStackView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ titleLabel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ detailTextView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ activityIndicatorView;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
