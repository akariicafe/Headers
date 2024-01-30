@class SRSTState, NSString;

@interface SRSTClient : NSObject {
    void /* unknown type, empty encoding */ _currentState;
    void /* unknown type, empty encoding */ _mostRecentEvent;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, retain) SRSTState *currentState;
@property (nonatomic, readonly) NSString *mostRecentEventName;

- (void)dispatchEvent:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
