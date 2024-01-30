@class NSMutableArray;

@interface ARTechniqueSequentialGatherContext : ARTechniqueGatherContext <ARDaemonSecureCoding> {
    NSMutableArray *_gatheredData;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)gatheredData;
- (id)initWithParentContext:(id)a0;
- (void)addResultData:(id)a0;
- (void)mergeResultsOfContext:(id)a0 resultFilterBlock:(id /* block */)a1;

@end
