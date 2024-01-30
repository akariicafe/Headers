@class IOSurfaceSharedEvent;

@interface _ANESharedSignalEvent : NSObject

@property (readonly, nonatomic) IOSurfaceSharedEvent *sharedEvent;
@property (readonly, nonatomic) unsigned long long value;
@property (readonly, nonatomic) unsigned int symbolIndex;
@property (readonly, nonatomic) unsigned long long eventType;

+ (id)new;
+ (id)signalEventWithValue:(unsigned long long)a0 symbolIndex:(unsigned int)a1 eventType:(unsigned long long)a2 sharedEvent:(id)a3;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithValue:(unsigned long long)a0 symbolIndex:(unsigned int)a1 eventType:(unsigned long long)a2 sharedEvent:(id)a3;
- (id)waitEvent;

@end
