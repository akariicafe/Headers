@class PKImage, NSData;

@interface PKImageDescriptorBitmap : PKImageDescriptor {
    NSData *_imageHash;
}

@property (readonly, nonatomic) PKImage *image;

+ (BOOL)supportsSecureCoding;
+ (id)createForImage:(id)a0 withTintColor:(long long)a1;
+ (id)createForImage:(id)a0 withTintColor:(long long)a1 hasBackground:(BOOL)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
