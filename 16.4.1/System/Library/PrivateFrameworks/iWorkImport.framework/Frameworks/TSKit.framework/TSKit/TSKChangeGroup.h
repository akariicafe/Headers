@class NSMutableArray;

@interface TSKChangeGroup : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableArray *changesArray;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)registerChange:(unsigned int)a0 details:(id)a1 forChangeSource:(id)a2;
- (id)initWithChangesArray:(id)a0;

@end
