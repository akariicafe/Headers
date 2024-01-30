@class NSArray, NSMutableArray;

@interface IPMessageThread : NSObject {
    NSMutableArray *_threadRoots;
    NSMutableArray *_allUnits;
    NSArray *_allUnitsSorted;
}

- (id)threads;
- (void).cxx_destruct;
- (void)appendUnit:(id)a0 inResponseToUnit:(id)a1;
- (id)orderedMessageUnits;

@end
