@class NSMutableArray;

@interface SGMicrodataItemScope : NSObject

@property (readonly, nonatomic) NSMutableArray *itemProps;

- (void).cxx_destruct;
- (id)init;
- (void)addItemProp:(id)a0;
- (BOOL)isReferencedBy:(id)a0;

@end
