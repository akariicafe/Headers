@class MSVBlockGuard;

@interface MPCAnalyticsSignpost : NSObject

@property (nonatomic) unsigned long long identifier;
@property (retain, nonatomic) MSVBlockGuard *guard;

+ (void)endWithIdentifier:(unsigned long long)a0 error:(id)a1;

- (id)initWithIdentifier:(unsigned long long)a0;
- (void)end;
- (id)initWithIdentifier:(unsigned long long)a0 timeout:(double)a1;
- (id)begin;
- (void).cxx_destruct;
- (void)endWithError:(id)a0;

@end
