@class NSSet, NSMutableArray;

@interface SGMicrodataItem : SGMicrodataItemScope

@property (readonly, nonatomic) NSSet *itemType;
@property (readonly, nonatomic) NSMutableArray *itemRef;

- (void).cxx_destruct;
- (void)resolveItemRefsWithDocument:(id)a0;
- (id)initWithItemType:(id)a0 itemRef:(id)a1;

@end
