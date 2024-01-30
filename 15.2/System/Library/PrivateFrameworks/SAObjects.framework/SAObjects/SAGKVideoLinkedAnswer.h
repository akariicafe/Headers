@class NSNumber;

@interface SAGKVideoLinkedAnswer : SAGKImageLinkedAnswer

@property (copy, nonatomic) NSNumber *runtimeInMilliseconds;

+ (id)videoLinkedAnswer;
+ (id)videoLinkedAnswerWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
