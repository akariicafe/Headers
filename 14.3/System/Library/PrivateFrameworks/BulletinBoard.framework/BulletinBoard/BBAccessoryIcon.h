@class NSMutableDictionary;

@interface BBAccessoryIcon : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSMutableDictionary *imagesForContentSize;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addImage:(id)a0 forContentSizeCategory:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)imageForContentSizeCategory:(id)a0;

@end
