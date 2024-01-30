@class NSString, _SRSTSharedState;

@interface SRSTSharedState : NSObject

@property (class, readonly, nonatomic) SRSTSharedState *preparingToServe;
@property (class, readonly, nonatomic) SRSTSharedState *serving;
@property (class, readonly, nonatomic) SRSTSharedState *unshared;
@property (class, readonly, nonatomic) SRSTSharedState *passive;

@property (readonly) _SRSTSharedState *underlyingObject;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long hash;

+ (id)new;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)makeProxy;
- (id)initWithUnderlyingObject:(id)a0;

@end
