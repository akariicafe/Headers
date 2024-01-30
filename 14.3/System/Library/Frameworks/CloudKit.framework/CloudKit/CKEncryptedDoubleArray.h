@class NSArray, NSString;

@interface CKEncryptedDoubleArray : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *doubleArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)value;
- (id)initWithDoubleArray:(id)a0;

@end
