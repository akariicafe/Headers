@class MDSearchableIndexService, SDConnectionConfiguration;

@interface CSIndexClientConnection : NSObject

@property (readonly, nonatomic) SDConnectionConfiguration *configuration;
@property (readonly, nonatomic) BOOL quotaDisabled;
@property (readonly, nonatomic) MDSearchableIndexService *service;

- (id)initWithConfiguration:(id)a0 indexer:(id)a1;
- (id)initWithConnection:(id)a0 indexer:(id)a1;
- (void).cxx_destruct;

@end
