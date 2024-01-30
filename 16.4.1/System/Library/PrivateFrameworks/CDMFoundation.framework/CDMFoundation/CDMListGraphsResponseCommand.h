@class NSOrderedSet, NSString;

@interface CDMListGraphsResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) NSOrderedSet *availableServiceGraphs;
@property (readonly, nonatomic) NSString *activeGraphName;

- (void).cxx_destruct;
- (id)initWithGraphs:(id)a0 activeGraphName:(id)a1;

@end
