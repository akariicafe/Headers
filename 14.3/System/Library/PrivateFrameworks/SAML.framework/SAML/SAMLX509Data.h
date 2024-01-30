@class NSString, NSNumber, NSData;

@interface SAMLX509Data : SAMLBaseElement

@property (readonly, nonatomic) NSString *issuerName;
@property (readonly, nonatomic) NSNumber *serialNumber;
@property (readonly, nonatomic) NSData *ski;
@property (readonly, nonatomic) NSString *subjectName;
@property (readonly, nonatomic) NSData *certificate;
@property (readonly, nonatomic) NSData *crl;

+ (id)createElement:(id *)a0;

@end
