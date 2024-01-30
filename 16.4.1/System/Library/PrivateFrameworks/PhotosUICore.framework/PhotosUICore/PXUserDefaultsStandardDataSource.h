@class NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface PXUserDefaultsStandardDataSource : NSObject <PXUserDefaultsDataSource> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly, nonatomic) PXUserDefaultsStandardDataSource *sharedInstance;

@property (readonly, nonatomic) NSDate *currentDate;

- (id)persistedValueForKey:(id)a0;
- (id)_initAsSharedInstance;
- (id)init;
- (void)setPersistedValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
