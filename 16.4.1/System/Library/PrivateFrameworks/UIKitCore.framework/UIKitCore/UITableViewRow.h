@class UITableViewCell;

@interface UITableViewRow : NSObject <NSCoding> {
    long long _indentationLevel;
}

@property (nonatomic) double height;
@property (retain, nonatomic) UITableViewCell *cell;

+ (id)row;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)indentationLevel;
- (void)setIndentationLevel:(long long)a0;
- (void).cxx_destruct;

@end
