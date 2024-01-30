@class NSMutableDictionary;

@interface BBAccessoryIcon : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSMutableDictionary *imagesForContentSize;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (void)addImage:(id)a0 forContentSizeCategory:(id)a1;
- (id)imageForContentSizeCategory:(id)a0;

@end
