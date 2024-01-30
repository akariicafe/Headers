@class NSMutableSet;
@protocol HFMediaProfileContainer;

@interface HUAppleMusicAccountItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *items;
@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;
@property (copy, nonatomic) id /* block */ filter;

- (void).cxx_destruct;
- (id)reloadItems;
- (id)initWithMediaProfileContainer:(id)a0;
- (id)invalidationReasons;

@end
