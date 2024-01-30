@interface SDSignalHandler : NSObject

+ (void)setDelegate:(id)a0 memoryStatusFlags:(unsigned long long)a1;
+ (void)addMemoryHandler;
+ (void)setupHandlers;
+ (void)addSignalHandler;

@end
