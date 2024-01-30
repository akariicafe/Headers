@class NSMutableArray;

@interface TSKChangeEntry : NSObject

@property (readonly, nonatomic) id changeSource;
@property (readonly, nonatomic) NSMutableArray *changes;

- (void)dealloc;
- (id)initWithChangeSource:(id)a0 changes:(id)a1;

@end
