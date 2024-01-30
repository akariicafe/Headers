@class NSArray, NSString;

@interface SAARParaphrasedAlternativeResultsPod : SAAceView

@property (copy, nonatomic) NSArray *alternativeResultViews;
@property (copy, nonatomic) NSString *title;

+ (id)paraphrasedAlternativeResultsPod;
+ (id)paraphrasedAlternativeResultsPodWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
