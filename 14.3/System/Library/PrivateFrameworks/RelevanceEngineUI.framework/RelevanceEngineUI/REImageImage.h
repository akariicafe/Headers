@class UIImage;

@interface REImageImage : REImage

@property (retain, nonatomic) UIImage *uiImage;

- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)image;
- (void)encodeWithCoder:(id)a0;

@end
