@class NSString, NSNumber, NSArray;

@interface GDKnosisRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, copy, nonatomic) NSNumber *limit;
@property (readonly, copy, nonatomic) NSArray *intentArgs;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithQuery:(id)a0 limit:(id)a1 intentArgs:(id)a2;

@end
