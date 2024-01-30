@class _SRSTCallState, NSString;

@interface SRSTCallState : NSObject

@property (class, readonly, nonatomic) SRSTCallState *noCall;
@property (class, readonly, nonatomic) SRSTCallState *micMutedCall;
@property (class, readonly, nonatomic) SRSTCallState *onHoldCall;
@property (class, readonly, nonatomic) SRSTCallState *ongoingCall;

@property (readonly) _SRSTCallState *underlyingObject;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long hash;

+ (id)new;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)makeProxy;
- (id)initWithUnderlyingObject:(id)a0;

@end
