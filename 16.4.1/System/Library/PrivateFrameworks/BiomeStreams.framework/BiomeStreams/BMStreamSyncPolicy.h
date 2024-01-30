@class NSDictionary;

@interface BMStreamSyncPolicy : NSObject {
    long long _currentPlatform;
}

@property (readonly, nonatomic) Class registeredEventClass;
@property (readonly, nonatomic) NSDictionary *policy;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)directionsSupportedForTransport:(unsigned long long)a0;
- (unsigned long long)directionsSupportedForTransport:(unsigned long long)a0 fromPlatform:(long long)a1;
- (id)initWithPolicyDictionary:(id)a0 eventClass:(Class)a1;
- (BOOL)supportsSyncingWithPlatform:(long long)a0 overTransport:(unsigned long long)a1 inDirection:(unsigned long long)a2;
- (BOOL)supportsSyncingWithPlatform:(long long)a0 overTransport:(unsigned long long)a1 inDirection:(unsigned long long)a2 fromPlatform:(long long)a3;
- (BOOL)supportsTransport:(unsigned long long)a0 direction:(unsigned long long)a1;
- (BOOL)supportsTransport:(unsigned long long)a0 direction:(unsigned long long)a1 fromPlatform:(long long)a2;

@end
