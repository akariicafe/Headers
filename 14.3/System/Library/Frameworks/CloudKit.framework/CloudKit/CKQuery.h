@class NSString, NSPredicate, NSArray;

@interface CKQuery : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *recordType;
@property (readonly, copy, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSArray *sortDescriptors;

- (void)setPredicate:(id)a0;
- (id)CKPropertiesDescription;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setRecordType:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithRecordType:(id)a0 predicate:(id)a1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
