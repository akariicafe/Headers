@class NSDate;
@protocol MSBackoffManagerDelegate;

@interface MSBackoffManager : NSObject <NSSecureCoding> {
    NSDate *_nextExpiryDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) id<MSBackoffManagerDelegate> delegate;
@property (nonatomic) double initialInterval;
@property (nonatomic) double backoffFactor;
@property (nonatomic) double randomizeFactor;
@property (nonatomic) double maxBackoffInterval;
@property (nonatomic) double currentInterval;
@property (retain) NSDate *nextExpiryDate;
@property (retain) NSDate *retryAfterDate;

- (void).cxx_destruct;
- (void)reset;
- (id)copyParameters;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)backoff;
- (void)encodeWithCoder:(id)a0;
- (id)initWithInitialInterval:(double)a0 backoffFactor:(double)a1 randomizeFactor:(double)a2 maxBackoffInterval:(double)a3 retryAfterDate:(id)a4;
- (void)didReceiveRetryAfterDate:(id)a0;
- (void)_complainAboutMissingKeyInArchive:(id)a0;

@end
