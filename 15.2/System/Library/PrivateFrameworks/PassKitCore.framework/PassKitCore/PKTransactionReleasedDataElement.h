@class NSString;

@interface PKTransactionReleasedDataElement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *elementNamespace;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long retentionIntent;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToReleasedDataElement:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
