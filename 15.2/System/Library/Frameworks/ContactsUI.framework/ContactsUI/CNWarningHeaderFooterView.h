@class NSString;

@interface CNWarningHeaderFooterView : CNContactTableViewHeaderFooterView

@property (nonatomic) BOOL shouldDisplayWarningIcon;
@property (retain, nonatomic) NSString *warningText;

+ (id)exclamationMark;

- (id)warningAttributedText;
- (void).cxx_destruct;

@end
