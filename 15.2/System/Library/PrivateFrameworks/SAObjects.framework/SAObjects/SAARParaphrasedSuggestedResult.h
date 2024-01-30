@class NSString;
@protocol SAClientBoundCommand;

@interface SAARParaphrasedSuggestedResult : SAAceView

@property (retain, nonatomic) id<SAClientBoundCommand> command;
@property (copy, nonatomic) NSString *displayText;
@property (nonatomic) long long rank;

+ (id)paraphrasedSuggestedResult;
+ (id)paraphrasedSuggestedResultWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
