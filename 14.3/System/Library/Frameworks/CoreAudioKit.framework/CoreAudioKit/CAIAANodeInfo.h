@class UIColor, NSMutableArray;

@interface CAIAANodeInfo : NSObject {
    NSMutableArray *nodeList;
    UIColor *labelColor;
}

@property (readonly) unsigned long long numNodes;
@property (retain) UIColor *labelColor;

- (void)refresh;
- (id)init;
- (id)nodeAtIndex:(unsigned long long)a0;
- (void)createNodeList;
- (id)nodeWithNodeInfo:(id)a0;

@end
