@class NSDate;
@protocol MKTransitItemReferenceDateUpdaterDelegate;

@interface MKTransitItemReferenceDateUpdater : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) NSDate *referenceDate;
@property (class, readonly, nonatomic) double referenceDateAsTimeInterval;

@property (weak, nonatomic) id<MKTransitItemReferenceDateUpdaterDelegate> delegate;
@property (nonatomic, getter=isActive) BOOL active;

+ (void)initialize;
+ (void)_addUpdater:(id)a0;
+ (void)_removeUpdater:(id)a0;
+ (unsigned long long)_updaterCount;
+ (BOOL)_needsUpdateReferenceDate;
+ (void)_updateReferenceDate;
+ (id)_currentTimeWithRoundedSeconds;
+ (void)_cancelReferenceDateUpdate;
+ (void)_referenceDateUpdateTimerFired;
+ (void)_scheduleReferenceDateUpdate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
