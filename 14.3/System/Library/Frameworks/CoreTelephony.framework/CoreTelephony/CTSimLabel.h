@class NSString;

@interface CTSimLabel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *unique_id;
@property (retain, nonatomic) NSString *text;

- (void).cxx_destruct;
- (id)initWithId:(id)a0 andText:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
