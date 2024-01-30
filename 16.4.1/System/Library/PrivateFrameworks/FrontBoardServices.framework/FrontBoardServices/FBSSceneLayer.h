@class CAContext, NSString;

@interface FBSSceneLayer : NSObject <BSXPCCoding> {
    double _level;
}

@property (readonly, nonatomic, getter=_context) CAContext *context;
@property (readonly, nonatomic) long long alignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithXPCDictionary:(id)a0;
- (BOOL)isExternalSceneLayer;
- (BOOL)isKeyboardLayer;
- (id)initWithXPCDictionary:(id)a0;
- (id)_succinctDescription;
- (void)_unsafe_captureLevel;
- (double)_unsafe_level;
- (BOOL)isKeyboardProxyLayer;
- (id)_initWithCAContext:(id)a0 fallbackLevel:(double)a1;
- (void)dealloc;
- (BOOL)isCAContextLayer;
- (id)init;
- (void).cxx_destruct;

@end
