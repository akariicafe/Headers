@interface AMDDODMLCustomTargetingHelper : NSObject

- (id)init;
- (id)performOperation:(id)a0 onArray:(id)a1 error:(id *)a2;
- (id)callAMDClient:(id)a0 error:(id *)a1;
- (id)getDictionaryValueDataType:(id)a0 error:(id *)a1;
- (id)getOperationsArray;
- (id)mainTargetingResolver:(id)a0 error:(id *)a1;
- (id)parseData:(id)a0 withArray:(id)a1 error:(id *)a2;
- (id)postProc:(id)a0 withDirections:(id)a1 error:(id *)a2;

@end
