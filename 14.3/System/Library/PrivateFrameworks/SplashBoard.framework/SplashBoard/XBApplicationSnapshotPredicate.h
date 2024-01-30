@class NSString, XBDisplayEdgeInsetsWrapper, BSMutableSettings;

@interface XBApplicationSnapshotPredicate : NSObject <BSDescriptionProviding> {
    BSMutableSettings *_clientSettings;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *launchInterfaceIdentifier;
@property (copy, nonatomic) NSString *requiredOSVersion;
@property (nonatomic) unsigned long long interfaceOrientationMask;
@property (nonatomic) struct CGSize { double x0; double x1; } referenceSize;
@property (nonatomic) double imageScale;
@property (nonatomic) unsigned long long contentTypeMask;
@property (nonatomic) unsigned long long statusBarStateMask;
@property (nonatomic) long long userInterfaceStyle;
@property (copy, nonatomic) XBDisplayEdgeInsetsWrapper *customSafeAreaInsets;
@property (nonatomic, getter=isFullScreen) BOOL fullScreen;
@property (nonatomic) unsigned long long statusBarState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicate;

- (void)_setClientObject:(id)a0 forKey:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void)_removeClientObjectForKey:(unsigned long long)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)evaluateWithObject:(id)a0;
- (id)_clientObjectForKey:(unsigned long long)a0;
- (BOOL)_hasClientObjectForKey:(unsigned long long)a0;

@end
