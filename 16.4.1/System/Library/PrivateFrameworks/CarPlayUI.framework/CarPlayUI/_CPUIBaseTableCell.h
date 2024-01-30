@class NSString, UIColor;

@interface _CPUIBaseTableCell : UITableViewCell

@property (class, readonly, nonatomic) NSString *identifier;
@property (class, readonly, nonatomic) double minimumHeight;
@property (class, readonly, nonatomic) double rowHeight;
@property (class, readonly, nonatomic) UIColor *disabledColor;
@property (class, readonly, nonatomic) UIColor *disabledHighlightedColor;

@property (nonatomic) BOOL itemEnabled;

+ (id)cellForTableView:(id)a0;

- (void)_updateTintColors;
- (void)configureCell;

@end
