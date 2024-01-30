@class NSArray, NSDictionary;

@interface ASCViewMetrics : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *instructions;
@property (readonly, copy, nonatomic) NSDictionary *pageFields;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dataForInvocationPoint:(id)a0;
- (id)initWithInstructions:(id)a0 pageFields:(id)a1;

@end
