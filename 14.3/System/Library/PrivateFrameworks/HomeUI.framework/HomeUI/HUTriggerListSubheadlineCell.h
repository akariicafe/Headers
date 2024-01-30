@class UITextView, NSArray, NSString, HUGridLayoutOptions, HFItem;
@protocol HUResizableCellDelegate, HUTriggerListSubheadlineCellDelegate;

@interface HUTriggerListSubheadlineCell : UITableViewCell <UITextViewDelegate, HUCellProtocol>

@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) UITextView *descriptionView;
@property (weak, nonatomic) id<HUTriggerListSubheadlineCellDelegate> delegate;
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (nonatomic) BOOL respectLayoutMargins;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)prepareForReuse;
- (void)updateUIWithAnimation:(BOOL)a0;
- (void)updateUIWithResults:(id)a0 animation:(BOOL)a1;
- (void)updateUIWithDescription:(id)a0;
- (id)_descriptionTextAttributes;

@end
