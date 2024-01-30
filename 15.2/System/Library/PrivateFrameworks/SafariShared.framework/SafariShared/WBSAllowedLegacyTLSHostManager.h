@class NSUserDefaults;

@interface WBSAllowedLegacyTLSHostManager : NSObject {
    NSUserDefaults *_browserDefaults;
}

- (void).cxx_destruct;
- (id)initWithBrowserDefaults:(id)a0;
- (BOOL)isLegacyTLSAllowedForHost:(id)a0;
- (void)allowLegacyTLSForHost:(id)a0;
- (void)clearAllLegacyTLSHosts;
- (void)clearLegacyTLSForHostIfPresent:(id)a0;
- (void)clearLegacyTLSForHosts:(id)a0;

@end
