@class NSString, UIImage, UIColor;

@interface PXUIContentFilterControllerCell : UITableViewCell {
    long long _filterItemTag;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) UIColor *iconTintColor;
@property (nonatomic) long long filterItemTag;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
