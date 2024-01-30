@class NSArray;

@interface WBSWebExtensionWebNavigationURLFilter : NSObject {
    NSArray *_predicateGroups;
}

- (BOOL)matchesURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 outErrorMessage:(id *)a1;

@end
