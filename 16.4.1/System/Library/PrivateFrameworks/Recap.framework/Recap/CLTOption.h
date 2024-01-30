@class NSArray, NSString, NSMutableArray, NSNumber;

@interface CLTOption : NSObject

@property (readonly, nonatomic) NSArray *shorthands;
@property (readonly, nonatomic) NSArray *longforms;
@property (copy, nonatomic) id /* block */ triggerAction;
@property (readonly, nonatomic) NSString *lefthandHelp;
@property (retain, nonatomic) NSString *righthandHelp;
@property (retain, nonatomic) NSString *argumentHelp;
@property (nonatomic) int occurencies;
@property (nonatomic) int maxAllowedOccurencies;
@property (nonatomic) int minConsumedArguments;
@property (nonatomic) int maxConsumedArguments;
@property (nonatomic) BOOL allowsNegativeNumbersAsArguments;
@property (retain, nonatomic) NSMutableArray *consumedArguments;
@property (readonly, nonatomic) NSArray *consumedOrDefaultArguments;
@property (retain, nonatomic) NSArray *defaultArguments;
@property (readonly, nonatomic) NSNumber *numberValue;

- (id)init;
- (void).cxx_destruct;
- (void)addLongform:(id)a0;
- (void)addShorthand:(id)a0;
- (BOOL)consumeArgument:(id)a0;

@end
