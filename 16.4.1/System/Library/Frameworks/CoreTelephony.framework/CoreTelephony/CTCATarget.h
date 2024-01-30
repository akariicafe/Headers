@class NSNumber, NSString;

@interface CTCATarget : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *targetId;
@property (retain, nonatomic) NSString *targetDescription;
@property (retain, nonatomic) NSNumber *x;
@property (retain, nonatomic) NSNumber *y;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
