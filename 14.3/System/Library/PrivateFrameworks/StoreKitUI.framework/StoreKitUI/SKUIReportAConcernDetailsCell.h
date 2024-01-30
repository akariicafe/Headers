@class NSString, UITextView;

@interface SKUIReportAConcernDetailsCell : UITableViewCell <UITextViewDelegate>

@property (retain, nonatomic) UITextView *textView;
@property (copy, nonatomic) NSString *placeholderText;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)updatePlaceholderText:(BOOL)a0;

@end
