@class HMHomeManager, NSMutableSet;

@interface HFHomeItemProvider : HFItemProvider

@property (retain, nonatomic) HMHomeManager *homeManager;
@property (retain, nonatomic) NSMutableSet *homeItems;
@property (copy, nonatomic) id /* block */ filter;

- (void).cxx_destruct;
- (id)initWithHomeManager:(id)a0;
- (id)items;
- (id)invalidationReasons;
- (id)reloadItems;

@end
