@interface TMLBlock : NSObject <TMLBlockJSExports> {
    id _block;
}

@property (readonly, nonatomic) id blockValue;

+ (void)initializeJSContext:(id)a0;
+ (id)blockWithFunction:(id)a0 argumentsEncoding:(id)a1;
+ (id)createBlockForJSFunction:(id)a0 argumentsEncoding:(id)a1;
+ (id)createBlockWithValueForJSFunction:(id)a0 argumentsEncoding:(id)a1;
+ (id)blockWithFunction:(id)a0;
+ (void)callBlock:(id)a0 arguments:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFunction:(id)a0 argumentsEncoding:(id)a1;
- (id)initWithFunctionWithValue:(id)a0 argumentsEncoding:(id)a1;

@end
