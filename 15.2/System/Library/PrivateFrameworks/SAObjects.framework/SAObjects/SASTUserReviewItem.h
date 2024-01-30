@class SAUIDecoratedText, NSString;

@interface SASTUserReviewItem : AceObject <SASTTemplateItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SAUIDecoratedText *reviewDate;
@property (retain, nonatomic) SAUIDecoratedText *reviewText;
@property (retain, nonatomic) SAUIDecoratedText *reviewer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userReviewItem;
+ (id)userReviewItemWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
