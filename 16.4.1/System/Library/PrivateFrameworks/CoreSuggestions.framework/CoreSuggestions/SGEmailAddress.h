@class NSString;

@interface SGEmailAddress : SGLabeledObject

@property (readonly, nonatomic) NSString *emailAddress;

+ (BOOL)supportsSecureCoding;
+ (id)emailAddress:(id)a0 label:(id)a1 extractionInfo:(id)a2 withRecordId:(id)a3;
+ (id)emailAddress:(id)a0 label:(id)a1 extractionType:(unsigned long long)a2 withRecordId:(id)a3;
+ (id)emailAddress:(id)a0 label:(id)a1 extractionType:(unsigned long long)a2 withRecordId:(id)a3 origin:(id)a4;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithEmailAddress:(id)a0 label:(id)a1 extractionInfo:(id)a2 recordId:(id)a3;
- (BOOL)isEqualToEmailAddress:(id)a0;

@end
