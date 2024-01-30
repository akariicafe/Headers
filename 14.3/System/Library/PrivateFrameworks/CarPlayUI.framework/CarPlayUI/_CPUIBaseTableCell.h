@class NSString;

@interface _CPUIBaseTableCell : UITableViewCell

@property (class, readonly, nonatomic) NSString *identifier;
@property (class, readonly, nonatomic) double minimumHeight;
@property (class, readonly, nonatomic) double rowHeight;

+ (id)cellForTableView:(id)a0;

- (void)configureCell;

@end
