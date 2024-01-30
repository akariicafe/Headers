@class NSArray, NSDictionary, NSMutableDictionary, NSAttributedString;

@interface NSExtensionItem : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_userInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (copy, nonatomic) NSAttributedString *attributedContentText;
@property (copy, nonatomic) NSArray *attachments;
@property (copy, nonatomic) NSDictionary *userInfo;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_matchingDictionaryRepresentation;
- (void)setAttachments:(id)a0;
- (id)attachments;
- (void)dealloc;
- (void)setAttributedContentText:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)attributedContentText;
- (id)attributedTitle;
- (void)setAttributedTitle:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
