@class NSNumber, NSDictionary, NSArray;

@interface DKDiagnosticResult : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *statusCode;
@property (readonly, nonatomic) NSDictionary *data;
@property (readonly, nonatomic) NSArray *files;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMutableResult:(id)a0;

@end
