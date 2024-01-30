@class NSArray, UINavigationItem, NSString;

@interface RUISpinnerRecord : NSObject

@property (copy, nonatomic) NSArray *rightItems;
@property (copy, nonatomic) NSArray *leftItems;
@property (retain, nonatomic) UINavigationItem *navigationItem;
@property (nonatomic) BOOL hidesBackButton;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *spinningTitle;

- (void).cxx_destruct;

@end
