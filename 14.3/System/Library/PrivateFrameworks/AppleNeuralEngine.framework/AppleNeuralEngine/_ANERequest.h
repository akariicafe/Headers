@class _ANEIOSurfaceObject, NSArray, _ANEPerformanceStats, NSNumber;

@interface _ANERequest : NSObject

@property (retain, nonatomic) _ANEPerformanceStats *perfStats;
@property (readonly, nonatomic) NSArray *inputArray;
@property (readonly, nonatomic) NSArray *inputIndexArray;
@property (readonly, nonatomic) NSArray *outputArray;
@property (readonly, nonatomic) NSArray *outputIndexArray;
@property (readonly, nonatomic) _ANEIOSurfaceObject *weightsBuffer;
@property (readonly, copy, nonatomic) NSNumber *procedureIndex;
@property (copy) id /* block */ completionHandler;

+ (id)requestWithInputs:(id)a0 inputIndices:(id)a1 outputs:(id)a2 outputIndices:(id)a3 weightsBuffer:(id)a4 procedureIndex:(id)a5;
+ (id)requestWithInputs:(id)a0 inputIndices:(id)a1 outputs:(id)a2 outputIndices:(id)a3 procedureIndex:(id)a4;

- (void).cxx_destruct;
- (BOOL)validate;
- (id)description;
- (id)initWithInputs:(id)a0 inputIndices:(id)a1 outputs:(id)a2 outputIndices:(id)a3 weightsBuffer:(id)a4 procedureIndex:(id)a5;

@end
