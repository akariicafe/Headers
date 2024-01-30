@class NSMutableDictionary;

@interface _AXTableViewInternal : NSObject {
    NSMutableDictionary *_children;
    NSMutableDictionary *_indexMap;
    NSMutableDictionary *_sectionHeaders;
    NSMutableDictionary *_sectionFooters;
    BOOL _reusableCellsEnabled;
    BOOL _searchTableViewVisible;
    BOOL _searchControllerDimmingViewVisible;
    long long _accessibleElementCount;
}

- (id)init;
- (void).cxx_destruct;

@end
