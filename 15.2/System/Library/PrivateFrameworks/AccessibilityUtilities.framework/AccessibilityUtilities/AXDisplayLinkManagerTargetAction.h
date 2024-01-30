@interface AXDisplayLinkManagerTargetAction : NSObject

@property (retain, nonatomic) id target;
@property (nonatomic) SEL actionSelector;
@property (nonatomic) unsigned long long displayDidRefreshCount;

- (id)initWithTarget:(id)a0 actionSelector:(SEL)a1;
- (void)displayDidRefresh:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
