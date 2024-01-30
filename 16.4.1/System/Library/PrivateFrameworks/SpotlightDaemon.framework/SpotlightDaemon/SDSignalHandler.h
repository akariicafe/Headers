@interface SDSignalHandler : NSObject

+ (void)setDelegate:(id)a0 memoryStatusFlags:(unsigned long long)a1;
+ (void)setupHandlers;
+ (void)addMemoryHandler;
+ (void)addSignalHandler;

@end
