@class TSXgPTPPortStatistics;

@interface TSXgPTPFDEtEPort : TSXgPTPNetworkPort

@property (retain, nonatomic) TSXgPTPPortStatistics *statistics;

- (void).cxx_destruct;
- (void)_updateFromProperties:(id)a0;

@end
