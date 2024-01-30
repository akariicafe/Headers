@class NSObject, NSDate;
@protocol OS_dispatch_source;

@interface GCDTimer : NSObject {
    NSObject<OS_dispatch_source> *_source;
}

@property (readonly, nonatomic, getter=isRepeating) BOOL repeating;
@property (readonly, nonatomic) NSDate *fireDate;

+ (id)scheduledTimerWithTimeInterval:(double)a0 queue:(id)a1 block:(id /* block */)a2;
+ (id)scheduledTimerWithTimeInterval:(double)a0 queue:(id)a1 repeating:(BOOL)a2 block:(id /* block */)a3;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithTimeInterval:(double)a0 queue:(id)a1 repeating:(BOOL)a2 block:(id /* block */)a3;

@end
