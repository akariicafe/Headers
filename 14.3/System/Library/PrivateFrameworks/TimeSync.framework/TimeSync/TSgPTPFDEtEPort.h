@class TSgPTPPortStatistics;

@interface TSgPTPFDEtEPort : TSgPTPNetworkPort

@property (retain, nonatomic) TSgPTPPortStatistics *statistics;

+ (id)diagnosticDescriptionForService:(id)a0 withIndent:(id)a1;

- (void).cxx_destruct;
- (id)_statistics;
- (BOOL)_commonInitWithService:(id)a0;
- (void)updateProperties;

@end
