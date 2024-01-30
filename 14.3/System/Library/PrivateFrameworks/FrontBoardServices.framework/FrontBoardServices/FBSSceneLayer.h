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

- (id)_succinctDescription;
- (void)_unsafe_captureLevel;
- (id)initWithXPCDictionary:(id)a0;
- (BOOL)isKeyboardProxyLayer;
- (BOOL)isKeyboardLayer;
- (BOOL)isCAContextLayer;
- (id)init;
- (void).cxx_destruct;
- (id)_initWithCAContext:(id)a0 fallbackLevel:(double)a1;
- (BOOL)isExternalSceneLayer;
- (void)dealloc;
- (double)_unsafe_level;
- (void)encodeWithXPCDictionary:(id)a0;

@end
