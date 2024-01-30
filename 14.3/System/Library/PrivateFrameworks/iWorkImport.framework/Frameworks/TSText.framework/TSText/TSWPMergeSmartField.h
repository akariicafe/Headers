@class NSString;

@interface TSWPMergeSmartField : TSWPPlaceholderSmartField {
    NSString *_property;
    NSString *_label;
    NSString *_key;
    int _category;
    BOOL _requiresFollowingWhitespace;
    NSString *_whitespace;
    NSString *_guid;
    NSString *_tableField;
}

@property (copy, nonatomic) NSString *property;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) int category;
@property (nonatomic) BOOL requiresFollowingWhitespace;
@property (copy, nonatomic) NSString *whitespace;
@property (copy, nonatomic) NSString *guid;
@property (copy, nonatomic) NSString *tableField;

- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (BOOL)allowsPasteAsSmartField;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (unsigned short)smartFieldKind;
- (id)scriptTag;

@end
