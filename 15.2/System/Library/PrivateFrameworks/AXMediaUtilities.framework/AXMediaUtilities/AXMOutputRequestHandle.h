@class NSArray, NSMutableArray;

@interface AXMOutputRequestHandle : NSObject {
    NSMutableArray *_actionHandles;
}

@property (readonly, nonatomic) NSArray *actionHandles;

- (void).cxx_destruct;
- (id)init;
- (void)addActionHandle:(id)a0;

@end
