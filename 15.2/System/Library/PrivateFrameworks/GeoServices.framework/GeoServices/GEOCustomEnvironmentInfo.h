@class NSString, NSMapTable;

@interface GEOCustomEnvironmentInfo : GEOEnvironmentInfo {
    NSMapTable *_overrideURLs;
    NSString *_uuid;
}

- (void)delete;
- (void)save;
- (BOOL)isActive;
- (void).cxx_destruct;
- (void)makeActive;
- (id)initWithName:(id)a0 displayName:(id)a1 dictionaryRepresentation:(id)a2;
- (void)updateWithURLs:(id)a0;
- (id)overrideURLs;
- (id)dictionaryRepresentation;

@end
