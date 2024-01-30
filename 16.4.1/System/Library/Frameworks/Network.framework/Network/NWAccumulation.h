@class NSString, NSMutableDictionary;

@interface NWAccumulation : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableDictionary *durations;
@property (retain, nonatomic) NSString *currentState;
@property (nonatomic) double lastUpdateTime;
@property (nonatomic) BOOL isSnapshot;

- (void)updateWithState:(id)a0 atTime:(double)a1;
- (id)initWithName:(id)a0;
- (id)snapshot;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)reset;

@end
