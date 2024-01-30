@interface MFSignatures : NSObject

+ (id)sharedInstance;
+ (id)signatureMarkupFormat:(id)a0;
+ (id)signaturePlainTextFormat:(id)a0;

- (id)signature;
- (id)init;
- (void)setSignature:(id)a0;
- (id)_getValue:(id)a0;
- (id)_modelSpecificLocalizedStringKeyForKey:(id)a0;
- (id)defaultSignature;
- (id)signatureForAccount:(id)a0;
- (BOOL)useAccountSignatures;
- (void)setSignature:(id)a0 forAccount:(id)a1;
- (id)signatureForSendingEmailAddress:(id)a0;
- (void)clearSignature;
- (void)setUseAccountSignatures:(BOOL)a0;
- (void)setSignature:(id)a0 forEmailAddress:(id)a1;
- (id)signatureMarkupForSendingEmailAddress:(id)a0;
- (id)signaturePlainTextForSendingEmailAddress:(id)a0;

@end
