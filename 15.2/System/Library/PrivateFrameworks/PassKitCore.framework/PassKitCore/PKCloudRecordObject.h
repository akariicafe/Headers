@class NSSet, NSMutableDictionary, NSObject;
@protocol PKCloudStoreCoding;

@interface PKCloudRecordObject : NSObject <NSSecureCoding> {
    NSMutableDictionary *_recordIDToRecord;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *records;
@property (readonly, nonatomic) NSObject<PKCloudStoreCoding> *item;

- (id)_descriptionWithDetailedOutput:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRecords:(id)a0;
- (void)applyCloudRecordObject:(id)a0;
- (id)description;
- (id)descriptionWithItem:(BOOL)a0;
- (void).cxx_destruct;
- (id)primaryIdentifier;
- (id)initWithCoder:(id)a0;

@end
