@class NSString;

@interface OZFxPlugProgressAPI : NSObject <FxProgressAPI, PROAPIObject>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedProgressAPI;
+ (void)releaseSharedProgressAPI;

- (BOOL)updateProgress:(float)a0;
- (id)init;
- (BOOL)conformsToProtocol:(id)a0 version:(unsigned int)a1;
- (BOOL)userHasCancelled;
- (void)_setControl:(const void *)a0;

@end
