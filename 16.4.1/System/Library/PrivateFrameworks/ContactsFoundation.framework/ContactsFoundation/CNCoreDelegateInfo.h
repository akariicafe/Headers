@class NSNumber, NSString, NSPersonNameComponents;

@interface CNCoreDelegateInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *dsid;
@property (readonly, copy, nonatomic) NSString *altDSID;
@property (readonly, copy, nonatomic) NSString *principalPath;
@property (readonly, copy, nonatomic) NSString *appleID;
@property (readonly, copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (readonly, nonatomic) BOOL isMe;

+ (id)hardCodedPrincipalPathForDSID:(id)a0;
+ (id)nameComponentsForFamilyMember:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAltDSID:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithFamilyMember:(id)a0;
- (id)initWithDSID:(id)a0 altDSID:(id)a1 appleID:(id)a2 principalPath:(id)a3 nameComponents:(id)a4 isMe:(BOOL)a5;
- (id)_hardCodedPrincipalPathForFamilyMember:(id)a0;

@end
