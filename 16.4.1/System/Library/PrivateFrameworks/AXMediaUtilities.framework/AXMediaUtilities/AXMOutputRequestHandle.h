@class NSArray, NSMutableArray;

@interface AXMOutputRequestHandle : NSObject {
    NSMutableArray *_actionHandles;
}

@property (readonly, nonatomic) NSArray *actionHandles;

- (id)init;
- (void).cxx_destruct;
- (void)addActionHandle:(id)a0;

@end
