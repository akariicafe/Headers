@class NSString, NSArray;

@interface VKDebugTreeNode : NSObject

@property (readonly, weak) VKDebugTreeNode *parent;
@property (readonly) NSString *name;
@property (retain) NSArray *children;

- (id)initWithParent:(id)a0;
- (BOOL)isExpandable;
- (void).cxx_destruct;
- (id)propertyColumn;
- (void)searchNodes:(id)a0 withParameter:(id)a1;
- (id)tagsColumn;
- (id)valueColumn;

@end
