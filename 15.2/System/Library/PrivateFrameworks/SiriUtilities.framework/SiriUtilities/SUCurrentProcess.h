@class SUIdleTracker;

@interface SUCurrentProcess : NSObject {
    void /* unknown type, empty encoding */ mock;
    void /* unknown type, empty encoding */ _idleTracker;
}

@property (class, nonatomic, readonly) SUCurrentProcess *default;

@property (nonatomic, retain) SUIdleTracker *idleTracker;

- (void).cxx_destruct;
- (id)init;

@end
