@class NSString, NSArray, NSURL, SAUIAppPunchOut;

@interface SAGKLinkedAnswer : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *displayLink;
@property (copy, nonatomic) NSURL *link;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SAUIAppPunchOut *punchOut;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSURL *searchUri;
@property (copy, nonatomic) NSArray *thumbnails;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)linkedAnswer;
+ (id)linkedAnswerWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
