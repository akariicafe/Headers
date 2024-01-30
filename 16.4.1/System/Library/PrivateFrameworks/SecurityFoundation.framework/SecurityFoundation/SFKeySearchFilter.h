@class NSArray;

@interface SFKeySearchFilter : NSObject <NSCopying, NSSecureCoding> {
    id _keySearchFilterInternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *specifiers;
@property (copy, nonatomic) NSArray *domains;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
