@interface AXAuditDocumentationManager : NSObject

+ (id)sharedManager;
+ (id)_appleDocViewerURLForWebDocURL:(id)a0;
+ (id)_docTypeCatalystDictionary;
+ (id)_docTypeDictionary;
+ (id)_getOriginaliOSTitle:(id)a0;
+ (id)_macOSToiOSTitleDictionary;
+ (id)appleDocURLForType:(long long)a0;
+ (id)appleDocViewerURLs;
+ (long long)getAXDocumentationType:(id)a0 isCatalyst:(BOOL)a1;
+ (id)webDocURLForType:(long long)a0;
+ (id)webpageURLs;

@end
