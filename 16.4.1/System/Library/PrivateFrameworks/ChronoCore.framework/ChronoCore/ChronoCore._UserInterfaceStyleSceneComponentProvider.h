@interface ChronoCore._UserInterfaceStyleSceneComponentProvider : NSObject <_UIWindowSceneComponentProviding> {
    void /* unknown type, empty encoding */ _colorScheme;
    void /* unknown type, empty encoding */ _environmentProvider;
    void /* unknown type, empty encoding */ _environmentSubscriber;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ _scene;
@property (nonatomic, retain) void /* unknown type, empty encoding */ _traitOverrides;

- (id)initWithScene:(id)a0;
- (void)_sceneWillInvalidate:(id)a0;
- (void)_setScene:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
