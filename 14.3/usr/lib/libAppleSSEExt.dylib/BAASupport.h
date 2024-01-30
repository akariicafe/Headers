@interface BAASupport : NSObject

+ (void)initialize;
+ (int)prepare;
+ (void)setDelegate:(id)a0;
+ (int)getCertificates:(id *)a0;
+ (int)issueNewCertificate;
+ (void)setBlessedUser:(unsigned int)a0 keybagUUID:(unsigned char[16])a1;
+ (int)getCertificateExpirationDate:(double *)a0;

@end
