@class NFLFeedSettings, NFLAbstractCellPropertyProvider;

@interface NFLAbstractCellSizer : NSObject

@property (weak, nonatomic) NFLFeedSettings *feedSettings;
@property (retain, nonatomic) NFLAbstractCellPropertyProvider *propertyProvider;

- (id)init;
- (void).cxx_destruct;
- (id)layoutDataForTileInfo:(id)a0 template:(id)a1 columnSpan:(unsigned long long)a2 showAccessoryText:(BOOL)a3;
- (id)initWithFeedSettings:(id)a0;

@end
