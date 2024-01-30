@class VNOperationPoints;

@interface VNOperationPointsProvider : NSObject <VNOperationPointsProviding> {
    VNOperationPoints *_operationPoints;
}

- (void).cxx_destruct;
- (id)initWithOperationPoints:(id)a0;
- (id)operationPointsAndReturnError:(id *)a0;

@end
