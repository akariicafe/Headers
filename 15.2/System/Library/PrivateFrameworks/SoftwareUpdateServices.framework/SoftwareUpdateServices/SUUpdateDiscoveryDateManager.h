@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SUUpdateDiscoveryDateManager : NSObject {
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSMutableArray *_buildVersionArray;
    NSMutableArray *_discoveryDateArray;
}

- (BOOL)containsBuildVersion:(id)a0;
- (id)init;
- (id)discoveryDateforBuildVersion:(id)a0;
- (id)initWithDiscoveryDateDictionary:(id)a0;
- (void)dealloc;
- (void)setDiscoveryDate:(id)a0 forBuildVersion:(id)a1;
- (id)dictionaryRepresentation;

@end
