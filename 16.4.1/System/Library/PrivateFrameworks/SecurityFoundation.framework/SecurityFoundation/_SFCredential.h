@class NSString, NSArray, NSData, NSDate, NSDictionary, _SFServiceIdentifier;

@interface _SFCredential : NSObject <NSSecureCoding, NSCopying> {
    NSArray *_supplementaryServiceIdentifiers;
    int _keyclass;
    NSString *_accessGroup;
    NSData *_changeToken;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=_setPersistentIdentifier:) NSString *persistentIdentifier;
@property (copy, nonatomic, setter=_setCreationDate:) NSDate *creationDate;
@property (copy, nonatomic, setter=_setModificationDate:) NSDate *modificationDate;
@property (nonatomic, getter=_keyclass, setter=_setKeyclass:) int keyclass;
@property (retain, nonatomic, getter=_accessGroup, setter=_setAccessGroup:) NSString *accessGroup;
@property (retain, nonatomic, getter=_changeToken, setter=_setChangeToken:) NSData *changeToken;
@property (retain, nonatomic) _SFServiceIdentifier *primaryServiceIdentifier;
@property (retain, nonatomic) NSArray *supplementaryServiceIdentifiers;
@property (copy, nonatomic) NSString *localizedLabel;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSDictionary *customAttributes;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)_initWithPrimaryServiceIdentifier:(id)a0 supplementaryServiceIdentiifers:(id)a1;

@end
