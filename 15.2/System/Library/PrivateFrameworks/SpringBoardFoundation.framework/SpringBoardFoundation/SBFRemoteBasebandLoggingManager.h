@class CellularLogging, NSHashTable;

@interface SBFRemoteBasebandLoggingManager : NSObject

@property (retain, nonatomic) CellularLogging *cellularLogging;
@property (retain, nonatomic) NSHashTable *observers;

+ (id)sharedInstance;

- (void)addObserver:(id)a0;
- (BOOL)isLogCollectionEnabled;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_notifyObservers;

@end
