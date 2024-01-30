@class NSString;

@interface __HMFLocationAuthorizationRequest : __HMFLocationManagerOperation <HMFLogging> {
    BOOL _requested;
}

@property (readonly) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithAuthorization:(id)a0;
- (id)initWithTimeout:(double)a0;
- (void)main;
- (id)initWithType:(long long)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)initWithType:(long long)a0 authorization:(id)a1;

@end
