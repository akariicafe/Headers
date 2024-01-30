@class NSString, NSArray;

@interface VKDebugTreeNode : NSObject

@property (readonly) VKDebugTreeNode *parent;
@property (readonly) NSString *name;
@property (retain) NSArray *children;

- (id)initWithParent:(id)a0;
- (BOOL)isExpandable;
- (id)propertyColumn;
- (id)valueColumn;
- (id)tagsColumn;
- (void)searchNodes:(id)a0 withParameter:(id)a1;
- (void)dealloc;

@end
