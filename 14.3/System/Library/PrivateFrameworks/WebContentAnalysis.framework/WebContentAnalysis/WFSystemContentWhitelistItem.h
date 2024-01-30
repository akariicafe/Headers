@interface WFSystemContentWhitelistItem : NSObject {
    char *_utf8DomainGlob;
}

- (BOOL)matchesURL:(id)a0;
- (void)dealloc;
- (id)initWithDomainGlob:(id)a0;

@end
