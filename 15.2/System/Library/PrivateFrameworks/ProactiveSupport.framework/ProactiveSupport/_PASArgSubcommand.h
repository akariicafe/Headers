@class NSString, NSMutableArray, NSMutableSet;

@interface _PASArgSubcommand : NSObject

@property (retain, nonatomic) NSMutableArray *registeredOptions;
@property (retain, nonatomic) NSMutableSet *requiredOptions;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *helpDescription;
@property (readonly, nonatomic) id /* block */ handler;

+ (id)subcommandWithName:(id)a0 help:(id)a1 handler:(id /* block */)a2;
+ (id)simpleSubcommandWithHelpGenerator:(id /* block */)a0 name:(id)a1 help:(id)a2 handler:(id /* block */)a3;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 help:(id)a1 handler:(id /* block */)a2;
- (void)registerOption:(id)a0;
- (id)optionShortHelp;
- (id)optionLongHelp;
- (id)naiveUsageHelpWithPositionalArgString:(id)a0;
- (id)customUsageHelpWithUsageOverride:(id)a0 positionalArgString:(id)a1 optionHelpOverride:(id)a2 additionalHelpText:(id)a3;

@end
