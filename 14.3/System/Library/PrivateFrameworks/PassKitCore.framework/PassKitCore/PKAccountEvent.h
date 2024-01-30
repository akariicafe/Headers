@class NSString, NSSet, NSDate;

@interface PKAccountEvent : NSObject <PKCloudStoreCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSDate *expirationDate;
@property (nonatomic) BOOL blockNotification;
@property (retain, nonatomic) NSSet *items;
@property (readonly, nonatomic) unsigned long long updateReasons;
@property (readonly, nonatomic) BOOL updateReasonIsInitialDownload;

+ (id)recordNamePrefix;
+ (id)eventIdentifierFromRecordName:(id)a0;
+ (long long)accountEventTypeFromRecord:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCloudStoreCoder:(id)a0;
- (id)initWithCloudStoreCoder:(id)a0;
- (id)recordTypesAndNamesIncludingServerData:(BOOL)a0;
- (void)applyPropertiesFromCloudStoreRecord:(id)a0;
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (unsigned long long)itemType;
- (id)recordNameForItem:(id)a0;
- (id)updateReasonsDescription;
- (id)description;
- (BOOL)isEqualToAccountEvent:(id)a0;
- (id)recordName;
- (BOOL)isEqual:(id)a0;
- (void)addUpdateReasons:(unsigned long long)a0;
- (id)primaryIdentifier;
- (void)encodeWithCoder:(id)a0;

@end
