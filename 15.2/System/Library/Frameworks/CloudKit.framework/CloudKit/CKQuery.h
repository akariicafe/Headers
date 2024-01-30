@class NSString, NSPredicate, NSArray;

@interface CKQuery : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *recordType;
@property (readonly, copy, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSArray *sortDescriptors;

- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)a0;
- (void)setPredicate:(id)a0;
- (id)description;
- (void)setRecordType:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRecordType:(id)a0 predicate:(id)a1;
- (id)debugDescription;

@end
