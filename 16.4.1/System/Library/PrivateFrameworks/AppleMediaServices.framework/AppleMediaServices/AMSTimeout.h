@protocol AMSTimeoutClockSource;

@interface AMSTimeout : NSObject

@property (retain, nonatomic) id<AMSTimeoutClockSource> clockSource;
@property (nonatomic) double expirationTimestamp;
@property (nonatomic) double timestampAtPreviousQuery;
@property (readonly, nonatomic, getter=hasExpired) BOOL expired;

+ (id)timeoutWithExpiration:(double)a0;

- (void).cxx_destruct;
- (id)initWithExpiration:(double)a0 clockSource:(id)a1;

@end
