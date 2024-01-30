@interface BAASupport : NSObject

+ (void)initialize;
+ (void)setBlessedUser:(unsigned int)a0 keybagUUID:(unsigned char[16])a1;
+ (int)getCertificates:(id *)a0;
+ (int)issueNewCertificate;
+ (void)setDelegate:(id)a0;
+ (int)getCertificateExpirationDate:(double *)a0;
+ (int)prepare;

@end
