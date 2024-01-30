@class UIColor, NSMutableArray;

@interface CAIAANodeInfo : NSObject {
    NSMutableArray *nodeList;
    UIColor *labelColor;
}

@property (readonly) unsigned long long numNodes;
@property (retain) UIColor *labelColor;

- (id)nodeAtIndex:(unsigned long long)a0;
- (id)init;
- (void)refresh;
- (void)createNodeList;
- (id)nodeWithNodeInfo:(id)a0;

@end
