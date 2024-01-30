@class NSString, NSMapTable;

@interface GEOCustomEnvironmentInfo : GEOEnvironmentInfo {
    NSMapTable *_overrideURLs;
    NSString *_uuid;
}

- (void)delete;
- (void).cxx_destruct;
- (void)save;
- (void)makeActive;
- (id)overrideURLs;
- (id)initWithName:(id)a0 displayName:(id)a1 dictionaryRepresentation:(id)a2;
- (void)updateWithURLs:(id)a0;
- (BOOL)isActive;
- (id)dictionaryRepresentation;

@end
