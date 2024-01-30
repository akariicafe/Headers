@class NSArray;

@interface HSIOReportSnapshot : HSIOReport

@property (retain, nonatomic) NSArray *samples;

+ (id)report:(id *)a0;
+ (id)reportWithOnlySimpleChannels:(id *)a0;
+ (id)snapshotReport:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqualToSnapshot:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)reportWithOnlySimpleChannels;
- (id)snapshotWithBaseline:(id)a0 error:(id *)a1;
- (id)snapshotByFilteringSamples:(id /* block */)a0;

@end
