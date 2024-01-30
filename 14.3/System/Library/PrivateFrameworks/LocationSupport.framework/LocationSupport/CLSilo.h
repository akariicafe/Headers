@class NSString;

@interface CLSilo : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *identifier;

+ (id)main;
+ (id)globalConfiguration;
+ (void)setGlobalConfiguration:(id)a0;

- (void)assertInside;
- (void)sync:(id /* block */)a0;
- (id)newTimer;
- (void)async:(id /* block */)a0;
- (void)assertOutside;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0;
- (BOOL)isSuspended;
- (double)currentLatchedAbsoluteTimestamp;
- (void)resume;
- (id)debugDescription;
- (void)suspend;

@end
