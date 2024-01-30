@class NSString, ADImageDescriptor;

@interface ADEspressoImageDescriptor : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) ADImageDescriptor *imageDescriptor;
@property (readonly, nonatomic) BOOL isInput;

+ (id)descriptorWithName:(id)a0 imageDescriptor:(id)a1 isInput:(BOOL)a2;

- (void).cxx_destruct;

@end
