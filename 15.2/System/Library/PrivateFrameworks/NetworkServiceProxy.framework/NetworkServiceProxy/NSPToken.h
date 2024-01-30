@class NSMutableArray, NSDate;

@interface NSPToken : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *tokens;
@property (retain, nonatomic) NSDate *expirationDate;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithExpirationDate:(id)a0;

@end
