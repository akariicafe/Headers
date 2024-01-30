@class NSSet, NSDictionary, NSObject;
@protocol PKCloudStoreCoding;

@interface PKCloudStoreUploadItemConfiguration : NSObject <NSSecureCoding> {
    unsigned long long _itemType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<PKCloudStoreCoding> *item;
@property (retain, nonatomic) NSSet *cloudStoreZones;
@property (copy, nonatomic) NSDictionary *recordSpecificKeys;
@property (nonatomic) unsigned long long codingType;
@property (nonatomic) BOOL detectConflicts;
@property (nonatomic) BOOL returnRecords;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToConfiguration:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0;
- (id)initWithItem:(id)a0 recordSpecificKeys:(id)a1;

@end
