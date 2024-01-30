@class NSString, NSUUID, AKInheritanceAccessKey;

@interface AABenefactorInfo : NSObject <AAInheritanceContactInfo, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long status;
@property (readonly, copy) NSString *handle;
@property (readonly, nonatomic) NSUUID *beneficiaryID;
@property (readonly, nonatomic) NSString *benefactorAltDSID;
@property (retain, nonatomic) AKInheritanceAccessKey *accessKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_statusDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBeneficiaryID:(id)a0 benefactorAltDSID:(id)a1;
- (id)initWithBeneficiaryID:(id)a0 benefactorAltDSID:(id)a1 handle:(id)a2;
- (id)initWithBeneficiaryID:(id)a0 handle:(id)a1 status:(long long)a2;

@end
