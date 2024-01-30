@class NSString, UITextView;

@interface CalendarNotesCell : EKUITableViewCell {
    UITextView *_textView;
}

@property (copy, nonatomic) NSString *text;
@property (readonly, retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) NSString *placeholder;

- (BOOL)becomeFirstResponder;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
