@class NSMutableArray;

@interface SGMicrodataItemScope : NSObject

@property (readonly, nonatomic) NSMutableArray *itemProps;

- (id)init;
- (void).cxx_destruct;
- (void)addItemProp:(id)a0;
- (BOOL)isReferencedBy:(id)a0;

@end
