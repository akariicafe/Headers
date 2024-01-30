@interface HSISPCapturePlugIn : NSObject {
    void /* function */ *_createFunction;
}

+ (id)new;
+ (id)defaultPlugIn;

- (id)init;
- (id)initWithFactoryFunctionSymbol:(id)a0 atPath:(id)a1;
- (id)device:(id *)a0;

@end
