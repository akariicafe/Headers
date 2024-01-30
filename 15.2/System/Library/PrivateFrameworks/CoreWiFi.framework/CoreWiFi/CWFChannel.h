@interface CWFChannel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long channel;
@property (nonatomic) int flags;
@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int band;
@property (readonly, nonatomic) BOOL is2GHz;
@property (readonly, nonatomic) BOOL is5GHz;
@property (readonly, nonatomic) BOOL isDFS;

- (BOOL)isEqualToChannel:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (int)width;
- (BOOL)isDFS;
- (BOOL)isEqual:(id)a0;
- (BOOL)is5GHz;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)is2GHz;

@end
