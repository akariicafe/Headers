@class NSString, ADImageDescriptor;

@interface ADEspressoImageDescriptor : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) ADImageDescriptor *imageDescriptor;
@property (readonly, nonatomic) BOOL isInput;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 pixelFormat:(unsigned int)a1 portraitSize:(struct CGSize { double x0; double x1; })a2 landscapeSize:(struct CGSize { double x0; double x1; })a3 isInput:(BOOL)a4;
- (id)initWithName:(id)a0 pixelFormat:(unsigned int)a1 size:(struct CGSize { double x0; double x1; })a2 isInput:(BOOL)a3;

@end
