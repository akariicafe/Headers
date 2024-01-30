@class NSNumber, CLKClockTimer;

@interface CLKClockTimerToken : NSObject {
    NSNumber *_id;
}

@property (nonatomic) long long updateFrequency;
@property (nonatomic) BOOL wantsCommit;
@property (nonatomic) BOOL wantsHighAccuracy;
@property (copy, nonatomic) id /* block */ handler;
@property (copy, nonatomic) id /* block */ log;
@property (weak, nonatomic) CLKClockTimer *owner;
@property (nonatomic) BOOL isActive;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithID:(long long)a0;

@end
