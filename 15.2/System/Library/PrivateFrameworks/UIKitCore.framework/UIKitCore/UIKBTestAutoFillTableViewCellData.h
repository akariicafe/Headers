@class UITableViewCell;

@interface UIKBTestAutoFillTableViewCellData : NSObject <NSCoding>

@property (readonly, nonatomic) UITableViewCell *cell;
@property (readonly, nonatomic) double height;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCell:(id)a0 height:(double)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
