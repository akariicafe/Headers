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

- (id)initWithID:(long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
