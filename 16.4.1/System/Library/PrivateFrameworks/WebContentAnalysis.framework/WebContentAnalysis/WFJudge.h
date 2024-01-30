@class WFSystemContentWhitelist, WFLSMMap;

@interface WFJudge : NSObject {
    WFLSMMap *map;
    WFSystemContentWhitelist *whitelist;
}

+ (id)defaultJudge;
+ (id)defaultLSMMapPath;

- (void)dealloc;
- (id)initWithMap:(id)a0;
- (id)_pronounceOnWebpage:(id)a0;
- (id)initWithMap:(id)a0 systemContentWhitelist:(id)a1;
- (id)pronounceOnPageContent:(id)a0 pageURL:(id)a1 debugPage:(id *)a2 pageTitle:(id *)a3;
- (id)pronounceOnPageContent:(id)a0 pageURL:(id)a1 whitelistUserPreferences:(id)a2 debugPage:(id *)a3 pageTitle:(id *)a4;
- (id)pronounceOnWebpage:(id)a0;

@end
