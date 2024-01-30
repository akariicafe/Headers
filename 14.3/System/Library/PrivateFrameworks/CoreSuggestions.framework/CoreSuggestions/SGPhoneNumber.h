@class NSString;

@interface SGPhoneNumber : SGLabeledObject

@property (readonly, nonatomic) NSString *phoneNumber;

+ (BOOL)supportsSecureCoding;
+ (id)phoneNumber:(id)a0 label:(id)a1 extractionType:(unsigned long long)a2 recordId:(id)a3 origin:(id)a4;
+ (id)phoneNumber:(id)a0 label:(id)a1 extractionType:(unsigned long long)a2 recordId:(id)a3;
+ (id)phoneNumber:(id)a0 label:(id)a1 extractionInfo:(id)a2 recordId:(id)a3;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithPhoneNumber:(id)a0 label:(id)a1 extractionInfo:(id)a2 recordId:(id)a3;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToPhoneNumber:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
