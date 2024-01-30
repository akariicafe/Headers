@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MPHomeSharingRentalTracker : NSObject {
    NSObject<OS_dispatch_queue> *_rentalTrackerQueue;
    NSMutableDictionary *_rentals;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)removeRentalWithItemID:(unsigned long long)a0;
- (void)addRentalWithItemID:(unsigned long long)a0 databaseID:(id)a1;
- (void)removeAllRentalsForDatabaseID:(id)a0;
- (void)_saveRentals;
- (id)_init;

@end
