@class NSArray;

@interface HSIOReportSnapshot : HSIOReport

@property (retain, nonatomic) NSArray *samples;

+ (id)report:(id *)a0;
+ (id)reportWithOnlySimpleChannels:(id *)a0;
+ (id)snapshotReport:(id)a0 error:(id *)a1;

- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToSnapshot:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)reportWithOnlySimpleChannels;
- (id)snapshotByFilteringSamples:(id /* block */)a0;
- (id)snapshotWithBaseline:(id)a0 error:(id *)a1;

@end
