@class NSArray, NSNumber, NSString;

@interface SAGKLinkedAnswerGroup : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *linkedAnswers;
@property (copy, nonatomic) NSNumber *numberOfResults;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)linkedAnswerGroup;
+ (id)linkedAnswerGroupWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
