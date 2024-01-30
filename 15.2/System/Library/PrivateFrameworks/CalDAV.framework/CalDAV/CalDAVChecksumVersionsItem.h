@class NSMutableSet;

@interface CalDAVChecksumVersionsItem : CoreDAVItem {
    NSMutableSet *_versionStringsSupported;
}

- (void).cxx_destruct;
- (id)init;
- (id)copyParseRules;
- (BOOL)supportsVersion:(id)a0;
- (void)addVersionSupported:(id)a0;

@end
