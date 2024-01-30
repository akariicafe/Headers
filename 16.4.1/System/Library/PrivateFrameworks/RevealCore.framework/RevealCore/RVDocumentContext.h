@class NSTimeZone, NSString, NSArray, NSURL, NSDate;

@interface RVDocumentContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *authorName;
@property (copy, nonatomic) NSString *authorEmailAddress;
@property (copy, nonatomic) NSString *authorContactUUID;
@property (copy, nonatomic) NSDate *contentReferenceDate;
@property (copy, nonatomic) NSTimeZone *contentReferenceTimeZone;
@property (copy, nonatomic) NSString *contentSubject;
@property (copy, nonatomic) NSString *selectedText;
@property (copy, nonatomic) NSURL *documentURL;
@property (copy, nonatomic) NSArray *existingDDResultsList;
@property (copy, nonatomic) NSString *coreSpotlightUniqueIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setNameAndEmailWithRawSenderField:(id)a0;

@end
