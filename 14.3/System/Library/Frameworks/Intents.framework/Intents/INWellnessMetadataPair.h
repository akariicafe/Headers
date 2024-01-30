@class NSString, NSNumber;

@interface INWellnessMetadataPair : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSNumber *numberValue;
@property (readonly, copy, nonatomic) NSString *stringValue;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithNumber:(id)a0 key:(id)a1;
- (id)initWithString:(id)a0 key:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;

@end
