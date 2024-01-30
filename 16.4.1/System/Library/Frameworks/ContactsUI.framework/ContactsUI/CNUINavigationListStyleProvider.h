@protocol CNUINavigationListStyle;

@interface CNUINavigationListStyleProvider : NSObject

@property (class, readonly, nonatomic) id<CNUINavigationListStyle> defaultStyle;
@property (class, readonly, nonatomic) id<CNUINavigationListStyle> phoneStyle;
@property (class, readonly, nonatomic) id<CNUINavigationListStyle> carPlayStyle;

@end
