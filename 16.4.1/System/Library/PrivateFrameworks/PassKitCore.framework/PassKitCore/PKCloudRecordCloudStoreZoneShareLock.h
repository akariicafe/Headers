@class PKCloudStoreZoneShareLock;

@interface PKCloudRecordCloudStoreZoneShareLock : PKCloudRecordObject

@property (retain, nonatomic) PKCloudStoreZoneShareLock *cloudStoreZoneShareLock;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)item;
- (id)initWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_descriptionWithIncludeItem:(BOOL)a0;
- (void)applyCloudRecordObject:(id)a0;
- (id)descriptionWithItem:(BOOL)a0;

@end
