@interface AXDisplayLinkManagerTargetAction : NSObject

@property (retain, nonatomic) id target;
@property (nonatomic) SEL actionSelector;
@property (nonatomic) unsigned long long displayDidRefreshCount;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithTarget:(id)a0 actionSelector:(SEL)a1;
- (void)displayDidRefresh:(id)a0;

@end
