@class NSNumber, SAUIImageResource;

@interface SAGKImageLinkedAnswer : SAGKLinkedAnswer

@property (copy, nonatomic) NSNumber *fileSize;
@property (retain, nonatomic) SAUIImageResource *imageResource;

+ (id)imageLinkedAnswer;
+ (id)imageLinkedAnswerWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
