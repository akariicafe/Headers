@class NSMutableDictionary;

@interface _AXTableViewInternal : NSObject

@property (nonatomic) BOOL reusableCellsEnabled;
@property (nonatomic) BOOL searchTableViewVisible;
@property (nonatomic) BOOL searchControllerDimmingViewVisible;
@property (readonly, nonatomic) NSMutableDictionary *children;
@property (readonly, nonatomic) NSMutableDictionary *indexMap;
@property (readonly, nonatomic) NSMutableDictionary *sectionHeaders;
@property (readonly, nonatomic) NSMutableDictionary *sectionFooters;
@property (nonatomic) long long accessibleElementCount;

- (id)init;
- (void).cxx_destruct;

@end
