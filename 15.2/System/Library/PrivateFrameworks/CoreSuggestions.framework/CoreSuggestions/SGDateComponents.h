@class NSDateComponents;

@interface SGDateComponents : SGLabeledObject

@property (readonly, nonatomic) NSDateComponents *dateComponents;

+ (BOOL)supportsSecureCoding;
+ (id)dateComponents:(id)a0 label:(id)a1 extractionInfo:(id)a2 withRecordId:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (id)dateString;
- (BOOL)isEqualToDateComponents:(id)a0;
- (id)initWithDateComponents:(id)a0 label:(id)a1 extractionInfo:(id)a2 recordId:(id)a3;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
