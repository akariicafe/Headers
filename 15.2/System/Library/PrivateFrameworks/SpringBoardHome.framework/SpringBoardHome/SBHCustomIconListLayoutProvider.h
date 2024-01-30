@class NSDictionary;
@protocol SBIconListLayout;

@interface SBHCustomIconListLayoutProvider : NSObject <SBIconListLayoutProvider>

@property (readonly, copy, nonatomic) NSDictionary *listLayouts;
@property (readonly, nonatomic) id<SBIconListLayout> defaultLayout;

- (id)layoutForIconLocation:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithListLayouts:(id)a0 defaultLayout:(id)a1;
- (id)initWithListLayouts:(id)a0;

@end
