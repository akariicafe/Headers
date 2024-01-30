@class NSDictionary;

@interface DKDiagnosticParameters : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *predicates;
@property (readonly, nonatomic) NSDictionary *specifications;
@property (readonly, nonatomic) NSDictionary *parameters;

+ (id)diagnosticParametersWithDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)_decoderClasses;

@end
