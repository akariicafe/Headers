@class NSString;

@interface SBAnalyticsAggdSimpleEventHandler : NSObject <SBFAnalyticsBackendEventHandling> {
    unsigned long long _eventType;
    id /* block */ _emitBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)latchForEvent:(unsigned long long)a0 aggdKey:(id)a1;
+ (id)monotonicallyIncreasingForEvent:(unsigned long long)a0 aggdKey:(id)a1;
+ (id)setScalarForEvent:(unsigned long long)a0 aggdKey:(id)a1 valueBlock:(id /* block */)a2;

- (BOOL)handleEvent:(unsigned long long)a0 withContext:(id)a1;
- (void).cxx_destruct;
- (id)initWithEvent:(unsigned long long)a0 emitBlock:(id /* block */)a1;

@end
