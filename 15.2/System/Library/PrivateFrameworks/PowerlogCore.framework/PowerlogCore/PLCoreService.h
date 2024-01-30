@class NSMutableDictionary;

@interface PLCoreService : PLCoreOperator

@property (retain) NSMutableDictionary *services;

- (void)startServices;
- (void).cxx_destruct;
- (id)init;
- (void)stopServices;

@end
