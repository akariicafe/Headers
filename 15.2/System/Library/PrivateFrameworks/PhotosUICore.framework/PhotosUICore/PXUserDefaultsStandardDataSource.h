@class NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface PXUserDefaultsStandardDataSource : NSObject <PXUserDefaultsDataSource> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSDate *currentDate;

- (void)setPersistedValue:(id)a0 forKey:(id)a1;
- (id)persistedValueForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
