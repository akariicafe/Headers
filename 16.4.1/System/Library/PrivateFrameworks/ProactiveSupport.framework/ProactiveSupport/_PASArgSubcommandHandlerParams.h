@class _PASArgSubcommand, NSDictionary, NSArray;

@interface _PASArgSubcommandHandlerParams : NSObject

@property (readonly, nonatomic) _PASArgSubcommand *subcommand;
@property (readonly, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) NSArray *positionalArguments;

- (void).cxx_destruct;
- (id)initWithSubcommand:(id)a0 options:(id)a1 positionalArguments:(id)a2;

@end
