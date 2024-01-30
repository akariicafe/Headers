@interface PFCSSearchableIndexProvider : NSObject

- (id)defaultPrivateSearchableIndex;
- (id)defaultSearchableIndex;
- (id)createPrivateSearchableIndexWithPath:(id)a0;
- (id)createPrivateSearchableIndexWithName:(id)a0 protectionClass:(id)a1 bundleIdentifier:(id)a2;
- (id)createSearchableIndexWithName:(id)a0 protectionClass:(id)a1 bundleIdentifier:(id)a2;

@end
