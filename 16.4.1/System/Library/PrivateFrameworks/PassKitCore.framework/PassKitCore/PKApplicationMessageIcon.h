@class PKImageDescriptor;

@interface PKApplicationMessageIcon : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKImageDescriptor *image;
@property (readonly, nonatomic) long long style;

+ (id)createWithImage:(id)a0 style:(long long)a1;
+ (struct CGSize { double x0; double x1; })maximumSizeForStyle:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;

@end
