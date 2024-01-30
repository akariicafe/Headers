@class NSURL, NSArray;

@interface ADEspressoInferenceDescriptor : NSObject {
    NSArray *_layoutNames;
}

@property (readonly, copy, nonatomic) NSURL *networkURL;
@property (readonly, copy, nonatomic) NSURL *networkVersionString;

+ (id)descriptorWithName:(id)a0 pixelFormat:(unsigned int)a1 size:(struct CGSize { double x0; double x1; })a2 isInput:(BOOL)a3;
+ (id)descriptorWithName:(id)a0 pixelFormat:(unsigned int)a1 portraitSize:(struct CGSize { double x0; double x1; })a2 landscapeSize:(struct CGSize { double x0; double x1; })a3 isInput:(BOOL)a4;

- (id)configurationNameForLayout:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithNetworkProvider:(id)a0;

@end
