@interface HSBrowseRequest : HSRequest

+ (id)requestWithDatabaseID:(unsigned int)a0 browseGroupType:(long long)a1;

- (id)_stringForBrowseGroupType:(long long)a0;
- (id)canonicalResponseForResponse:(id)a0;
- (id)initWithDatabaseID:(unsigned int)a0 browseGroupType:(long long)a1;

@end
