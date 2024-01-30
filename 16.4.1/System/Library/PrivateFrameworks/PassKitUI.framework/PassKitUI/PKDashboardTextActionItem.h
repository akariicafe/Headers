@class UIImage, NSString;

@interface PKDashboardTextActionItem : NSObject <PKDashboardItem>

@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) long long actionStyle;
@property (nonatomic) long long layoutStyle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) id /* block */ action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void).cxx_destruct;

@end
