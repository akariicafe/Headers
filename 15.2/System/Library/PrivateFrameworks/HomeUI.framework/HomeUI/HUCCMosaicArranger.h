@class NSArray;

@interface HUCCMosaicArranger : NSObject

@property (retain, nonatomic) NSArray *layouts;
@property (nonatomic) unsigned long long numberOfItemsNeeded;
@property (nonatomic) unsigned long long chosenLayoutType;

- (void).cxx_destruct;
- (void)_configureForPortraitGrid;
- (void)_configureForLandscapeGrid;
- (id)initWithCCMosaicType:(unsigned long long)a0;
- (id)calculateOrderingForItems:(id)a0;

@end
