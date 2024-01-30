@interface SDSignalHandler : NSObject

+ (void)setupHandlers;
+ (void)addMemoryHandler;
+ (void)setDelegate:(id)a0 memoryStatusFlags:(unsigned long long)a1;
+ (void)addSignalHandler;

@end
