@class NSMutableArray;

@interface TSKChangeEntry : NSObject

@property (readonly, nonatomic) id changeSource;
@property (readonly, nonatomic) NSMutableArray *changes;

- (void).cxx_destruct;
- (id)initWithChangeSource:(id)a0 changes:(id)a1;

@end
