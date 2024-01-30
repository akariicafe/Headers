@interface CWFChannel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long channel;
@property (nonatomic) int flags;
@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) BOOL is2GHz;
@property (readonly, nonatomic) BOOL is5GHz;
@property (readonly, nonatomic) BOOL isDFS;

- (int)width;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isDFS;
- (BOOL)isEqualToChannel:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)is2GHz;
- (BOOL)is5GHz;
- (void)encodeWithCoder:(id)a0;

@end
