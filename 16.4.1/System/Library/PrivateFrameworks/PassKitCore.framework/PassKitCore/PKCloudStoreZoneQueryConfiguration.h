@class NSString;

@interface PKCloudStoreZoneQueryConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long itemType;
@property (readonly, nonatomic) NSString *recordName;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (nonatomic) long long accountType;
@property (copy, nonatomic) NSString *transactionSourceIdentifier;
@property (copy, nonatomic) NSString *altDSID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithItemType:(unsigned long long)a0 recordName:(id)a1;
- (id)initWithTransactionSourceIdentifier:(id)a0 accountIdentifier:(id)a1 accountType:(long long)a2 serviceIdentifier:(id)a3 altDSID:(id)a4;

@end
