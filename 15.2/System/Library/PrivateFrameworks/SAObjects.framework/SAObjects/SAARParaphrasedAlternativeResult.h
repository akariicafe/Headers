@class NSString;
@protocol SAClientBoundCommand;

@interface SAARParaphrasedAlternativeResult : SAAceView

@property (retain, nonatomic) id<SAClientBoundCommand> command;
@property (copy, nonatomic) NSString *displayText;
@property (copy, nonatomic) NSString *paraphrasedIntent;

+ (id)paraphrasedAlternativeResult;
+ (id)paraphrasedAlternativeResultWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
