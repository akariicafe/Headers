@class NSMutableDictionary;

@interface WFWhitelistSiteBuffer : NSObject

@property (retain) NSMutableDictionary *siteTree;
@property unsigned long long maxSize;

- (id)init;
- (void)dealloc;
- (BOOL)containsURLString:(id)a0;
- (void)addURLString:(id)a0;
- (BOOL)treeContainsURLString:(id)a0;

@end
