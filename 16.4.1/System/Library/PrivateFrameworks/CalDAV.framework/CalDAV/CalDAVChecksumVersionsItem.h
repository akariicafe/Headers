@class NSMutableSet;

@interface CalDAVChecksumVersionsItem : CoreDAVItem {
    NSMutableSet *_versionStringsSupported;
}

- (id)copyParseRules;
- (id)init;
- (void).cxx_destruct;
- (BOOL)supportsVersion:(id)a0;
- (void)addVersionSupported:(id)a0;

@end
