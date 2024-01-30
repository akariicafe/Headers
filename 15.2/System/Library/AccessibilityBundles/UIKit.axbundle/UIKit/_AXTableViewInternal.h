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

- (void).cxx_destruct;
- (id)init;

@end
