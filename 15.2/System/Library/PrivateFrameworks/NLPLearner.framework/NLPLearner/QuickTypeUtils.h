@interface QuickTypeUtils : NSObject

+ (void)initialize;
+ (BOOL)isInternalInstall;
+ (id)messageContentForEvent:(id)a0;
+ (id)languageForText:(id)a0;
+ (id)languageForText:(id)a0 checkVietnamese:(BOOL)a1;
+ (BOOL)checkVietnameseCharactersInText:(id)a0;
+ (id)getAttachmentURLByName:(id)a0 attachments:(id)a1 error:(id *)a2;
+ (void)removeTemporaryFile:(id)a0;
+ (id)messageContentForEvent:(id)a0 andLanguage:(id)a1;
+ (unsigned long long)sourceForEvent:(id)a0;

@end
