@class INImage, INCodableAttribute;

@interface INIntentKeyParameter : NSObject

@property (readonly, nonatomic) INCodableAttribute *codableAttribute;
@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) INImage *image;

- (void).cxx_destruct;
- (id)initWithCodableAttribute:(id)a0 value:(id)a1 image:(id)a2;

@end
