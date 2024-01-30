@class UITableViewCell;

@interface UITableViewRow : NSObject <NSCoding> {
    long long _indentationLevel;
}

@property (nonatomic) double height;
@property (retain, nonatomic) UITableViewCell *cell;

+ (id)row;

- (void)setIndentationLevel:(long long)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)indentationLevel;

@end
