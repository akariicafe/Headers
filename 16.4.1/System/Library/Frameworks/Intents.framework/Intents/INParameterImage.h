@class INImage, INParameter;

@interface INParameterImage : NSObject <NSCopying>

@property (readonly, copy, nonatomic) INParameter *parameter;
@property (readonly, copy, nonatomic) INImage *image;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithParameter:(id)a0 image:(id)a1;

@end
