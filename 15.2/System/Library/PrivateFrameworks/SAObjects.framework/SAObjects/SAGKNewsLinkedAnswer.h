@class NSString, NSDate;

@interface SAGKNewsLinkedAnswer : SAGKLinkedAnswer

@property (copy, nonatomic) NSDate *publicationDate;
@property (copy, nonatomic) NSString *source;

+ (id)newsLinkedAnswer;
+ (id)newsLinkedAnswerWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
