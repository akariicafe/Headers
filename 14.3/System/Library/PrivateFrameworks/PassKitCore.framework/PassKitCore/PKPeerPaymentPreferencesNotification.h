@class NSString;

@interface PKPeerPaymentPreferencesNotification : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) unsigned long long notificationType;
@property (nonatomic) BOOL value;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqualToPreferencesNotification:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
