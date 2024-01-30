@class NSArray;

@interface HSIOReportSnapshot : HSIOReport

@property (retain, nonatomic) NSArray *samples;

+ (id)report:(id *)a0;
+ (id)reportWithOnlySimpleChannels:(id *)a0;
+ (id)snapshotReport:(id)a0 error:(id *)a1;

- (BOOL)isEqualToSnapshot:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)reportWithOnlySimpleChannels;
- (id)snapshotWithBaseline:(id)a0 error:(id *)a1;
- (id)snapshotByFilteringSamples:(id /* block */)a0;

@end
