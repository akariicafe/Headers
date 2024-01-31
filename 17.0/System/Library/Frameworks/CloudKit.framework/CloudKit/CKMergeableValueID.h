@class NSData, NSString, CKRoughlyEquivalentProperties;

@interface CKMergeableValueID : NSObject <CKXPCSuitableString, CKRoughlyEquivalent, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *identifier;
@property (readonly, nonatomic) NSString *zoneName;
@property (readonly, nonatomic) NSString *zoneOwner;
@property (readonly, nonatomic) NSString *recordName;
@property (readonly, nonatomic) NSString *recordFieldName;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly, nonatomic) CKRoughlyEquivalentProperties *equivalencyProperties;

- (id)recordID;
- (unsigned long long)hash;
- (id)zoneID;
- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)key;
- (id)description;
- (void).cxx_destruct;
- (id)name;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)CKXPCSuitableString;
- (id)initWithData:(id)a0 zoneName:(id)a1 zoneOwner:(id)a2;
- (id)initWithData:(id)a0 zoneName:(id)a1 zoneOwner:(id)a2 recordName:(id)a3 recordFieldName:(id)a4 encrypted:(BOOL)a5;
- (id)initWithName:(id)a0 recordID:(id)a1 key:(id)a2 encrypted:(BOOL)a3;
- (id)initWithName:(id)a0 zoneID:(id)a1;
- (BOOL)isEqualToMergeableValueID:(id)a0;

@end
