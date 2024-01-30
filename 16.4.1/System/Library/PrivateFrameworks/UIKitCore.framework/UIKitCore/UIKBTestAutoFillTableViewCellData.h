@class UITableViewCell;

@interface UIKBTestAutoFillTableViewCellData : NSObject <NSCoding>

@property (readonly, nonatomic) UITableViewCell *cell;
@property (readonly, nonatomic) double height;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCell:(id)a0 height:(double)a1;

@end
