@class NSArray, UINavigationItem;

@interface PSSpinnerRecord : NSObject

@property (copy, nonatomic) NSArray *rightItems;
@property (copy, nonatomic) NSArray *leftItems;
@property (retain, nonatomic) UINavigationItem *navigationItem;
@property (nonatomic) BOOL hidesBackButton;

- (void).cxx_destruct;

@end
