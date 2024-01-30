@class CellularLogging, NSHashTable;

@interface SBFRemoteBasebandLoggingManager : NSObject

@property (retain, nonatomic) CellularLogging *cellularLogging;
@property (retain, nonatomic) NSHashTable *observers;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (BOOL)isLogCollectionEnabled;
- (void)addObserver:(id)a0;
- (void)_notifyObservers;

@end
