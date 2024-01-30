@class NSMutableDictionary;

@interface PLCoreService : PLCoreOperator

@property (retain) NSMutableDictionary *services;

- (id)init;
- (void).cxx_destruct;
- (void)startServices;
- (void)stopServices;

@end
