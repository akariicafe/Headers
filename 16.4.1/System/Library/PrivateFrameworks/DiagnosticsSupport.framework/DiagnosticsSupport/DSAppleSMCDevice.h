@interface DSAppleSMCDevice : NSObject

@property unsigned int dataPort;
@property BOOL isConnectionOpen;

- (id)init;
- (BOOL)closeAppleSMC;
- (BOOL)openAppleSMC:(int)a0;
- (int)readDataFor:(id)a0 value:(void *)a1 size:(unsigned long long)a2;
- (double)readValueFor:(id)a0;
- (BOOL)writeDataFor:(id)a0 value:(void *)a1 size:(unsigned long long)a2;
- (BOOL)writeValueFor:(id)a0 andValue:(id)a1;

@end
