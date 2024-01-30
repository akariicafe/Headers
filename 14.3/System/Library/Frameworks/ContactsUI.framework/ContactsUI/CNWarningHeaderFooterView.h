@class NSString;

@interface CNWarningHeaderFooterView : CNContactTableViewHeaderFooterView

@property (nonatomic) BOOL shouldDisplayWarningIcon;
@property (retain, nonatomic) NSString *warningText;

+ (id)exclamationMark;

- (void).cxx_destruct;
- (id)warningAttributedText;

@end
