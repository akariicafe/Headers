@class UIImage;

@interface REImageImage : REImage

@property (retain, nonatomic) UIImage *uiImage;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithImage:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)image;
- (void).cxx_destruct;

@end
