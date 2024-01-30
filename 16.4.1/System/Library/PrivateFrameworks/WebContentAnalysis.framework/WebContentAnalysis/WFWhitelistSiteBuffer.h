@class NSMutableDictionary;

@interface WFWhitelistSiteBuffer : NSObject

@property (retain) NSMutableDictionary *siteTree;
@property unsigned long long maxSize;

- (void)dealloc;
- (id)init;
- (void)addURLString:(id)a0;
- (BOOL)containsURLString:(id)a0;
- (BOOL)treeContainsURLString:(id)a0;

@end
