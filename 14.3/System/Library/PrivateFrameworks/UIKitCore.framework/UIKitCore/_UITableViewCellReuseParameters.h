@class NSIndexPath;

@interface _UITableViewCellReuseParameters : NSObject

@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) BOOL didEndDisplaying;

- (void).cxx_destruct;
- (id)initWithIndexPath:(id)a0 didEndDisplaying:(BOOL)a1;

@end
