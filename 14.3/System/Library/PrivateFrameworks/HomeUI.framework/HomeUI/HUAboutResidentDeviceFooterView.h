@class NSString, UITextView, NSMutableArray;
@protocol HUAboutResidentDeviceFooterViewDelegate;

@interface HUAboutResidentDeviceFooterView : UITableViewHeaderFooterView <UITextViewDelegate>

@property (retain, nonatomic) UITextView *messageView;
@property (retain, nonatomic) NSMutableArray *constraints;
@property (weak, nonatomic) id<HUAboutResidentDeviceFooterViewDelegate> delegate;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } messageInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)_setupViews;
- (id)init;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithCoder:(id)a0;
- (id)_textAttributes;
- (id)_linkTextAttributes;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithReuseIdentifier:(id)a0;

@end
