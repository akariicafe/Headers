@interface PFCSSearchableIndexProvider : NSObject

- (id)defaultSearchableIndex;
- (id)createSearchableIndexWithName:(id)a0 protectionClass:(id)a1 bundleIdentifier:(id)a2;
- (id)createPrivateSearchableIndexWithName:(id)a0 protectionClass:(id)a1 bundleIdentifier:(id)a2;
- (id)createPrivateSearchableIndexWithPath:(id)a0;
- (id)defaultPrivateSearchableIndex;

@end
