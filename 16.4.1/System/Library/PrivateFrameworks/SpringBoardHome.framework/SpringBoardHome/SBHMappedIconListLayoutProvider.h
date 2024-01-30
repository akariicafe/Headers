@class NSMutableDictionary;
@protocol SBIconListLayoutProvider;

@interface SBHMappedIconListLayoutProvider : NSObject <SBIconListLayoutProvider> {
    NSMutableDictionary *_mappedIconLocations;
}

@property (readonly, nonatomic) id<SBIconListLayoutProvider> targetListLayoutProvider;

- (id)layoutForIconLocation:(id)a0;
- (void).cxx_destruct;
- (void)mapIconLocation:(id)a0 toIconLocation:(id)a1;
- (id)initWithTargetListLayoutProvider:(id)a0;

@end
