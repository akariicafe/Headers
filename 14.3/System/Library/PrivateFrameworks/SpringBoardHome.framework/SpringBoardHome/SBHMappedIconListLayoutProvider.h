@class NSMutableDictionary;
@protocol SBIconListLayoutProvider;

@interface SBHMappedIconListLayoutProvider : NSObject <SBIconListLayoutProvider> {
    NSMutableDictionary *_mappedIconLocations;
}

@property (readonly, nonatomic) id<SBIconListLayoutProvider> targetListLayoutProvider;

- (void).cxx_destruct;
- (id)initWithTargetListLayoutProvider:(id)a0;
- (void)mapIconLocation:(id)a0 toIconLocation:(id)a1;
- (id)layoutForIconLocation:(id)a0;

@end
