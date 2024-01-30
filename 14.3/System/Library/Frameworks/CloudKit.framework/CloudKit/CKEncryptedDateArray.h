@class NSArray, NSString;

@interface CKEncryptedDateArray : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *dateArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)value;
- (id)initWithDateArray:(id)a0;

@end
