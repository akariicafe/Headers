@class NSString, NSMutableDictionary, NSMutableString, NSMutableArray;

@interface VMUOptionParser : NSObject {
    NSMutableArray *_optionDescriptions;
    NSMutableArray *_appleInternalOptionDescriptions;
    NSMutableDictionary *_optionBlockByString;
    struct __CFArray { } *_longOptStructs;
    NSMutableString *_shortOpts;
    unsigned long long _spacing;
}

@property (copy, nonatomic) NSString *purposeDescription;
@property (copy, nonatomic) NSString *syntaxDescription;
@property (copy, nonatomic) NSString *discussion;
@property (nonatomic) BOOL singleHyphenLongNames;
@property (nonatomic) BOOL parametersShowAsAssignment;
@property (readonly) int optind;

- (id)init;
- (void).cxx_destruct;
- (void)usage:(id)a0;
- (void)dealloc;
- (void)registerOptionWithLongName:(id)a0 shortName:(id)a1 argumentKind:(int)a2 argumentName:(id)a3 optionDescription:(id)a4 flags:(unsigned long long)a5 handler:(id /* block */)a6;
- (id)parseArguments:(char **)a0 withBlock:(id /* block */)a1;
- (void)printOptionDescriptions:(id)a0;
- (void)usage:(id)a0 shouldExit:(BOOL)a1;
- (void)registerOptionWithLongName:(id)a0 shortName:(id)a1 argumentKind:(int)a2 argumentName:(id)a3 optionDescription:(id)a4 handler:(id /* block */)a5;
- (id)parseArgumentsArray:(id)a0 withBlock:(id /* block */)a1;

@end
