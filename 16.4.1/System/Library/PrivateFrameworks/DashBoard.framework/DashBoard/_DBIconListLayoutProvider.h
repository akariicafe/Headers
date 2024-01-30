@class SBIconListFlowLayout;

@interface _DBIconListLayoutProvider : NSObject <SBIconListLayoutProvider>

@property (retain, nonatomic) SBIconListFlowLayout *layout;

- (id)initWithEnvironment:(id)a0;
- (id)layoutForIconLocation:(id)a0;
- (void).cxx_destruct;

@end
