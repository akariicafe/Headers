@class NSString, UIColor;

@interface PKDashboardFooterTextItem : NSObject <PKDashboardItem>

@property (copy, nonatomic) NSString *footerText;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } linkRange;
@property (retain, nonatomic) UIColor *linkTextColor;
@property (copy, nonatomic) id /* block */ action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;
+ (id)itemWithFooterText:(id)a0;

- (void).cxx_destruct;

@end
