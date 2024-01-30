@class NSMutableDictionary, NSMutableArray;

@interface _HKGraphSeriesZoomLevelConfigurationManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *displayTypeIdentifierToConfiguration;
@property (retain, nonatomic) NSMutableDictionary *graphSeriesUUIDToConfiguration;
@property (retain, nonatomic) NSMutableArray *graphSeriesInOrderAdded;

- (id)init;
- (void)addConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)allDisplayTypes;
- (id)_displayTypeIdentifierForDisplayType:(id)a0;
- (id)allGraphSeries;
- (id)configurationForDisplayType:(id)a0;
- (id)configurationForGraphSeries:(id)a0;
- (void)removeConfigurationForDisplayType:(id)a0;

@end
