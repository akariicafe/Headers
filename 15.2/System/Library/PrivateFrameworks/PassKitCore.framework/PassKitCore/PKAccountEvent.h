@class NSString, NSSet, NSDate;

@interface PKAccountEvent : NSObject <PKCloudStoreCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSString *altDSID;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSDate *expirationDate;
@property (nonatomic) BOOL blockNotification;
@property (retain, nonatomic) NSSet *items;
@property (readonly, nonatomic) unsigned long long updateReasons;
@property (readonly, nonatomic) BOOL updateReasonIsInitialDownload;

+ (id)eventIdentifierFromRecordName:(id)a0;
+ (long long)accountEventTypeFromRecord:(id)a0;
+ (id)recordNamePrefix;

- (void)applyPropertiesFromCloudStoreRecord:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)a0;
- (void)encodeWithCloudStoreCoder:(id)a0 codingType:(unsigned long long)a1;
- (void)_encodeServerDataForCloudStoreCoder:(id)a0;
- (id)recordNameForItem:(id)a0;
- (id)updateReasonsDescription;
- (id)description;
- (unsigned long long)itemType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)primaryIdentifier;
- (id)initWithCoder:(id)a0;
- (id)recordName;
- (id)initWithCloudStoreCoder:(id)a0;
- (void)addUpdateReasons:(unsigned long long)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToAccountEvent:(id)a0;

@end
