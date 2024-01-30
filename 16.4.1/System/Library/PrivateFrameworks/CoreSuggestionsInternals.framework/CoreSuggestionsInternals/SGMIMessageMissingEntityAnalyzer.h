@interface SGMIMessageMissingEntityAnalyzer : NSObject

+ (id)_identifyComposeWarningsFromSubject:(id)a0 content:(id)a1 toRecipients:(id)a2 ccRecipients:(id)a3 bccRecipients:(id)a4 originalToRecipients:(id)a5 originalCcRecipients:(id)a6 attachments:(id)a7 language:(id)a8 store:(id)a9 disableConservativeCheckRequirement:(BOOL)a10;
+ (id)filterOutOrConvertMatches:(id)a0 visibleFlatRecipientEmailsList:(id)a1 visibleFlatRecipientList:(id)a2 bccFlatRecipientList:(id)a3 contactMatchRequired:(BOOL)a4 textContent:(id)a5 regexLanguage:(id)a6 detectedLanguage:(id)a7 store:(id)a8;
+ (id)identifyComposeWarningsFromSubject:(id)a0 content:(id)a1 attributes:(id)a2 toRecipients:(id)a3 ccRecipients:(id)a4 bccRecipients:(id)a5 originalToRecipients:(id)a6 originalCcRecipients:(id)a7 attachments:(id)a8;
+ (id)identifyComposeWarningsFromSubject:(id)a0 content:(id)a1 toRecipients:(id)a2 ccRecipients:(id)a3 bccRecipients:(id)a4 originalToRecipients:(id)a5 originalCcRecipients:(id)a6 attachments:(id)a7;
+ (id)identifyComposeWarningsFromSubject:(id)a0 content:(id)a1 toRecipients:(id)a2 ccRecipients:(id)a3 bccRecipients:(id)a4 originalToRecipients:(id)a5 originalCcRecipients:(id)a6 attachments:(id)a7 language:(id)a8 store:(id)a9 disableConservativeCheckRequirement:(BOOL)a10;
+ (id)identifyWarningsFromSubject:(id)a0 content:(id)a1 toRecipients:(id)a2 ccRecipients:(id)a3 bccRecipients:(id)a4 originalToRecipients:(id)a5 originalCcRecipients:(id)a6 attachments:(id)a7;
+ (BOOL)matchRecentContact:(id)a0 store:(id)a1;
+ (id)reportUserEngagement:(BOOL)a0 forWarning:(id)a1;
+ (id)reportUserEngagement:(BOOL)a0 forWarning:(id)a1 store:(id)a2;

@end
