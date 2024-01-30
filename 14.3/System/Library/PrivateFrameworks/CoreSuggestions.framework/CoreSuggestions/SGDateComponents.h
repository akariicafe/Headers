@class NSDateComponents;

@interface SGDateComponents : SGLabeledObject

@property (readonly, nonatomic) NSDateComponents *dateComponents;

+ (BOOL)supportsSecureCoding;
+ (id)dateComponents:(id)a0 label:(id)a1 extractionInfo:(id)a2 withRecordId:(id)a3;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDateComponents:(id)a0 label:(id)a1 extractionInfo:(id)a2 recordId:(id)a3;
- (BOOL)isEqualToDateComponents:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
