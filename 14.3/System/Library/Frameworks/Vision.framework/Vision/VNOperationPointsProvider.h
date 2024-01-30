@class VNOperationPoints;

@interface VNOperationPointsProvider : NSObject <VNOperationPointsProviding> {
    VNOperationPoints *_operationPoints;
}

- (void).cxx_destruct;
- (id)operationPointsAndReturnError:(id *)a0;
- (id)initWithOperationPoints:(id)a0;

@end
