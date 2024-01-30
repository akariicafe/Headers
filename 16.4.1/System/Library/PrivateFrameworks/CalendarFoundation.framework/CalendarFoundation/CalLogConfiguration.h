@class NSString, NSMutableArray;

@interface CalLogConfiguration : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *nodes;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDetailedDefinition:(id)a0;
- (id)initWithSimpleDefinition:(id)a0;
- (void)parseConfigurationDefinition:(id)a0;
- (id)parseFilterDefinition:(id)a0;
- (id)parseNodeDefinition:(id)a0;
- (id)parseWriterDefinition:(id)a0;

@end
