@class UIColor, NSAttributedString;

@interface FBKRequestRecord : DEDRequestRecord

@property (readonly) NSAttributedString *attrRequestHeader;
@property (readonly) NSAttributedString *attrResponseHeader;
@property (readonly) NSAttributedString *attrRequestBody;
@property (readonly) NSAttributedString *attrResponseBody;
@property (readonly) UIColor *displayColor;

- (id)description;
- (id)attributedStringAttributes;

@end
