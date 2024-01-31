@class NSString, CKRecordID, CKRoughlyEquivalentProperties, CKRecord;

@interface CKMovePhotosChange : NSObject <CKRoughlyEquivalent, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CKRecordID *sourceRecordID;
@property (retain, nonatomic) NSString *sourceRecordChangeTag;
@property (retain, nonatomic) CKRecord *destinationRecord;
@property (readonly, nonatomic) CKRoughlyEquivalentProperties *equivalencyProperties;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
