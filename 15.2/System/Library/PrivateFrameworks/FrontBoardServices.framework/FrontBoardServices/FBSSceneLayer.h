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

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (BOOL)isExternalSceneLayer;
- (BOOL)isCAContextLayer;
- (id)_succinctDescription;
- (BOOL)isKeyboardProxyLayer;
- (BOOL)isKeyboardLayer;
- (id)_initWithCAContext:(id)a0 fallbackLevel:(double)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_unsafe_captureLevel;
- (void)dealloc;
- (double)_unsafe_level;

@end
