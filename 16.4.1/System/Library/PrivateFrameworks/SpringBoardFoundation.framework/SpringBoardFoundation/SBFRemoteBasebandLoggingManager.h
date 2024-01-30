@class CellularLogging, NSHashTable;

@interface SBFRemoteBasebandLoggingManager : NSObject

@property (retain, nonatomic) CellularLogging *cellularLogging;
@property (retain, nonatomic) NSHashTable *observers;

+ (id)sharedInstance;

- (void)addObserver:(id)a0;
- (BOOL)isLogCollectionEnabled;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)_notifyObservers;
- (void).cxx_destruct;

@end
