@class UINavigationItem, NSString, NSArray;

@interface AAUINavigationItemSpinnerController : NSObject <AAUISpinnerController> {
    NSArray *_leftBarItems;
    NSArray *_rightBarItems;
    BOOL _hidesBackButton;
}

@property (retain, nonatomic) UINavigationItem *navigationItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
