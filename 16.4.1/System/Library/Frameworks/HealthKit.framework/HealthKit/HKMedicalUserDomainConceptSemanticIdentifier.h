@class NSUUID, NSString, HKMedicalCoding;

@interface HKMedicalUserDomainConceptSemanticIdentifier : HKUserDomainConceptSemanticIdentifier

@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, copy, nonatomic) HKMedicalCoding *medicalCoding;

+ (id)semanticIdentifierWithComponents:(id)a0;

- (id)initWithTypeIdentifier:(id)a0;
- (id)stringValue;
- (id)init;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 countryCode:(id)a1 medicalCoding:(id)a2;

@end
