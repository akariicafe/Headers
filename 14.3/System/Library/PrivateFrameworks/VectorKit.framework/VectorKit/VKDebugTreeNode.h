@class NSString, NSArray;

@interface VKDebugTreeNode : NSObject

@property (readonly) VKDebugTreeNode *parent;
@property (readonly) NSString *name;
@property (retain) NSArray *children;

- (BOOL)isExpandable;
- (id)propertyColumn;
- (id)valueColumn;
- (void)searchNodes:(id)a0 withParameter:(id)a1;
- (void)dealloc;
- (id)initWithParent:(id)a0;
- (id)tagsColumn;

@end
