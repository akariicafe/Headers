@class NSMutableDictionary;

@interface PLCoreService : PLCoreOperator

@property (retain) NSMutableDictionary *services;

- (void)startPreUnlockServices;
- (void)startServices;
- (id)init;
- (void)stopServices;
- (void).cxx_destruct;

@end
