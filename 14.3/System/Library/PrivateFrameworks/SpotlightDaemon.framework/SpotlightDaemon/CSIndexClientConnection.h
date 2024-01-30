@class MDSearchableIndexService, SDConnectionConfiguration;

@interface CSIndexClientConnection : NSObject

@property (readonly, nonatomic) SDConnectionConfiguration *configuration;
@property (readonly, nonatomic) BOOL quotaDisabled;
@property (readonly, nonatomic) MDSearchableIndexService *service;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 indexer:(id)a1;
- (id)initWithConfiguration:(id)a0 indexer:(id)a1;

@end
