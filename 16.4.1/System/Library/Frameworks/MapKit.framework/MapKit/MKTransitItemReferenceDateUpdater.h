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
+ (void)_removeUpdater:(id)a0;
+ (void)_addUpdater:(id)a0;
+ (void)_cancelReferenceDateUpdate;
+ (id)_currentTimeWithRoundedSeconds;
+ (BOOL)_needsUpdateReferenceDate;
+ (void)_referenceDateUpdateTimerFired;
+ (void)_scheduleReferenceDateUpdate;
+ (void)_updateReferenceDate;
+ (unsigned long long)_updaterCount;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;

@end
