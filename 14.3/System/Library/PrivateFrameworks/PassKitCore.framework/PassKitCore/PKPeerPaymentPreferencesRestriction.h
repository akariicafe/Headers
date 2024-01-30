@class NSString;

@interface PKPeerPaymentPreferencesRestriction : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) unsigned long long restrictionType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqualToPreferencesRestriction:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
