@class NSString, NSData;

@interface CKMergeableValueID : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *zoneName;
@property (readonly, copy, nonatomic) NSString *zoneOwner;
@property (readonly, copy, nonatomic) NSString *recordName;
@property (readonly, copy, nonatomic) NSString *recordFieldName;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSData *identifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 zoneName:(id)a1 zoneOwner:(id)a2;
- (id)initWithData:(id)a0 zoneName:(id)a1 zoneOwner:(id)a2 recordName:(id)a3 recordFieldName:(id)a4 encrypted:(BOOL)a5;
- (BOOL)isEqualToMergeableValueID:(id)a0;

@end
