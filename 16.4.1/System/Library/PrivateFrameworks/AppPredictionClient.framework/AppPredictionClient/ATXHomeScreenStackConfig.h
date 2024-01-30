@class NSArray, NSString, ATXHomeScreenPage;

@interface ATXHomeScreenStackConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long numberOfLeafIconSpots;
@property (nonatomic) BOOL allowsNewWidget;
@property (nonatomic) BOOL allowsSmartRotate;
@property (copy, nonatomic) NSArray *widgets;
@property (nonatomic) unsigned long long stackLayoutSize;
@property (nonatomic) long long coordinateRow;
@property (nonatomic) long long coordinateColumn;
@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) ATXHomeScreenPage *page;

- (void)encodeWithCoder:(id)a0;
- (id)initFromDictionaryRepresentation:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)compactDescription;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)_updateWidgetBackpointers;
- (void)assignWidgetSpaceCoordinateWithRow:(long long)a0 column:(long long)a1;
- (BOOL)isAppPredictionPanel;
- (BOOL)isPinnedSuggestionsWidget;
- (BOOL)isPinnedWidget;

@end
