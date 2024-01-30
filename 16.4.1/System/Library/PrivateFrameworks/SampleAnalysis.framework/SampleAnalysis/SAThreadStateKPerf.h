@interface SAThreadStateKPerf : SAThreadState

@property BOOL filledName;
@property BOOL filledDispatchQueue;
@property BOOL filledSwiftTask;
@property BOOL filledUserStack;
@property BOOL filledScheduling;
@property BOOL filledCyclesInstructions;
@property BOOL filledSnapshot;

@end
