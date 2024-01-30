@class NSString, NSPredicate, NSArray;

@interface CKQuery : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *recordType;
@property (readonly, copy, nonatomic) NSPredicate *predicate;
@property (copy) NSArray *sortDescriptors;

- (void)encodeWithCoder:(id)a0;
- (void)_setRecordType:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)CKPropertiesDescription;
- (id)initWithRecordType:(id)a0 predicate:(id)a1;
- (id)init;
- (void)_setPredicate:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
