@class NSArray;

@interface WBSWebExtensionWebNavigationURLFilter : NSObject {
    NSArray *_predicateGroups;
}

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 outErrorMessage:(id *)a1;
- (BOOL)matchesURL:(id)a0;

@end
