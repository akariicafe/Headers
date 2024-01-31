@class NSString, CXHandle;

@interface CXLabeledHandle : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CXHandle *handle;
@property (copy, nonatomic) NSString *label;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToLabeledHandle:(id)a0;
- (id)initWithHandle:(id)a0 label:(id)a1;

@end
