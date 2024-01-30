@protocol XBApplicationProviding;

@interface XBCacheDeleteRequestHandler : NSObject

@property (retain, nonatomic) id<XBApplicationProviding> applicationProvider;

- (void).cxx_destruct;
- (id)initWithApplicationProvider:(id)a0;
- (id)amountPurgeable:(id)a0 urgency:(int)a1;
- (id)performPurge:(id)a0 urgency:(int)a1;
- (id)performPeriodic:(id)a0 urgency:(int)a1;

@end
