@class SBHIconTableViewListLayout;
@protocol SBIconListLayoutProvider;

@interface SBHIconTableViewListLayoutProvider : NSObject <SBIconListLayoutProvider> {
    SBHIconTableViewListLayout *_listLayout;
}

@property (readonly, nonatomic) id<SBIconListLayoutProvider> defaultListLayoutProvider;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDefaultListLayoutProvider:(id)a0;
- (id)layoutForIconLocation:(id)a0;

@end
