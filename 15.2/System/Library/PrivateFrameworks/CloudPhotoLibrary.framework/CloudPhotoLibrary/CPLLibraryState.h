@class NSDate;

@interface CPLLibraryState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (copy, nonatomic) NSDate *disabledDate;
@property (copy, nonatomic) NSDate *deleteDate;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
