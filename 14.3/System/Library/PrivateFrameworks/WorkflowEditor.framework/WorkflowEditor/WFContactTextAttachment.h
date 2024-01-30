@class WFContact;

@interface WFContactTextAttachment : WFValueTextAttachment

@property (retain, nonatomic) WFContact *value;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)valueName;

@end
