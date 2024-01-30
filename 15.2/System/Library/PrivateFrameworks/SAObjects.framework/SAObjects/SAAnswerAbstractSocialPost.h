@class NSString, NSArray, NSURL, NSDate;

@interface SAAnswerAbstractSocialPost : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *authorTitle;
@property (copy, nonatomic) NSArray *comments;
@property (copy, nonatomic) NSDate *dateCreated;
@property (copy, nonatomic) NSDate *dateModified;
@property (copy, nonatomic) NSURL *icon;
@property (nonatomic) long long rank;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)abstractSocialPost;
+ (id)abstractSocialPostWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
