@class NSMutableArray;

@interface ARTechniqueSequentialGatherContext : ARTechniqueGatherContext <ARDaemonSecureCoding> {
    NSMutableArray *_gatheredData;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)addResultData:(id)a0;
- (id)gatheredData;
- (id)initWithParentContext:(id)a0;
- (void)mergeResultsOfContext:(id)a0 resultFilterBlock:(id /* block */)a1;

@end
