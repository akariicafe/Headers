@class NSXPCConnection;

@interface _NSProgressWithRemoteParent : NSProgress

@property (retain) NSXPCConnection *parentConnection;
@property unsigned long long sequence;

- (void)dealloc;
- (void)_updateFractionCompleted:(struct _NSProgressFractionTuple { struct _NSProgressFraction { long long x0; long long x1; BOOL x2; } x0; struct _NSProgressFraction { long long x0; long long x1; BOOL x2; } x1; })a0;
- (void)_setUserInfoValue:(id)a0 forKey:(id)a1 fromChild:(BOOL)a2;

@end
