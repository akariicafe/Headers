@interface CMGestureManager : NSObject {
    id _internal;
}

@property (copy) id /* block */ gestureHandler;

+ (BOOL)isGestureServiceEnabled;
+ (BOOL)isGestureServiceAvailable;
+ (void)setGestureServiceEnabled:(BOOL)a0;

- (id)initWithPriority:(int)a0;
- (id)init;
- (void)dealloc;

@end
