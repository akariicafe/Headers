@class NSString, ECEmailAddress, NSArray;

@interface ECEmailAddressComponents : NSObject <ECEmailAddressConvertible, EFPubliclyDescribable, NSCopying>

@property (readonly, copy) NSString *idnaAddress;
@property (readonly) ECEmailAddress *emailAddressValue;
@property (readonly) NSString *stringValue;
@property (readonly) NSString *simpleAddress;
@property (copy) NSString *displayName;
@property (copy) NSString *localPart;
@property (copy) NSString *domain;
@property (copy, setter=setIDNADomain:) NSString *idnaDomain;
@property (copy) NSArray *groupList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;

+ (id)componentsWithString:(id)a0;
+ (id)componentsWithEmailAddress:(id)a0;

- (id)_initWithString:(id)a0 displayName:(id)a1 localPart:(id)a2 domain:(id)a3 groupList:(id)a4;
- (BOOL)_nts_isValidDomain;
- (id)initWithString:(id)a0;
- (BOOL)_nts_getValidatedLocalPart:(id *)a0 domain:(id *)a1 idnaDomain:(id *)a2 displayName:(id *)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)_nts_isValid;
- (BOOL)_nts_getValidatedDomain:(id *)a0 idnaDomain:(id *)a1 avoidReparse:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithEmailAddress:(id)a0;

@end
