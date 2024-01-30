@class NSArray, NSDictionary, NSMutableDictionary, NSAttributedString;

@interface NSExtensionItem : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_userInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (copy, nonatomic) NSAttributedString *attributedContentText;
@property (copy, nonatomic) NSArray *attachments;
@property (copy, nonatomic) NSDictionary *userInfo;

- (id)attributedTitle;
- (void)encodeWithCoder:(id)a0;
- (id)_matchingDictionaryRepresentation;
- (void)setAttributedContentText:(id)a0;
- (id)description;
- (id)attributedContentText;
- (void)setAttachments:(id)a0;
- (id)attachments;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setAttributedTitle:(id)a0;

@end
