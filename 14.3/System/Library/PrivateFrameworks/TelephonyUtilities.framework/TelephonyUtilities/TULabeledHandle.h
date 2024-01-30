@class NSString, TUHandle;

@interface TULabeledHandle : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TUHandle *handle;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, nonatomic) BOOL isSuggested;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithHandle:(id)a0 label:(id)a1 isSuggested:(BOOL)a2;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToLabeledHandle:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
