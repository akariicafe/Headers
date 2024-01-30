@interface AKIDPUtility : NSObject

+ (id)convertError:(id)a0;
+ (BOOL)dictionary:(id)a0 containsKeys:(id)a1;
+ (id)idpURLFromRequest:(id)a0;
+ (BOOL)isMicrosoftRequestDictionary:(id)a0;
+ (id)microsoftLoginURLFromParameters:(id)a0;
+ (id)parametersFromRequest:(id)a0;
+ (id)parametersFromResponseURL:(id)a0 request:(id)a1;

@end
