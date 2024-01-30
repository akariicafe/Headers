@class CKReference, NSString;

@interface CKEncryptedReference : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CKReference *reference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)value;
- (id)_recordIDFromPRecordIdentifier:(id)a0;
- (id)_pReferenceFromReference:(id)a0;
- (id)_referenceFromPReference:(id)a0;
- (id)initWithReference:(id)a0;

@end
