@class NSString;

@interface WFPhoneNumber : NSObject <WFNaming, NSCopying, WFSerializableContent>

@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSString *formattedPhoneNumber;
@property (readonly, nonatomic) NSString *normalizedPhoneNumber;
@property (readonly, nonatomic) NSString *contactName;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *localizedLabel;
@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (id)phoneNumberWithPhoneNumberString:(id)a0;
+ (id)phoneNumberWithPhoneNumberString:(id)a0 contactName:(id)a1 label:(id)a2;
+ (id)phoneNumbersInString:(id)a0 error:(id *)a1;
+ (BOOL)stringContainsPhoneNumbers:(id)a0;
+ (id)phoneNumberWithTextCheckingResult:(id)a0;

- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)wfSerializedRepresentation;
- (id)initWithPhoneNumberString:(id)a0 contactName:(id)a1 label:(id)a2;

@end
