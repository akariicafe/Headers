@class NSString;

@interface PKPeerPaymentPreferencesNotification : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) unsigned long long notificationType;
@property (nonatomic) BOOL value;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToPreferencesNotification:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
