@interface WFSystemContentWhitelistItem : NSObject {
    char *_utf8DomainGlob;
}

- (void)dealloc;
- (BOOL)matchesURL:(id)a0;
- (id)initWithDomainGlob:(id)a0;

@end
