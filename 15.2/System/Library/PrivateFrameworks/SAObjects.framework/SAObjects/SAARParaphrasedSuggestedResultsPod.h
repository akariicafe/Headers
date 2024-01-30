@class NSArray, NSString;

@interface SAARParaphrasedSuggestedResultsPod : SAAceView

@property (copy, nonatomic) NSArray *suggestedResults;
@property (copy, nonatomic) NSString *title;

+ (id)paraphrasedSuggestedResultsPod;
+ (id)paraphrasedSuggestedResultsPodWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
