@class NSArray, NSString;

@interface WFStaticMenuElementGroup : NSObject <WFMenuElement, WFMenuElementGroup>

@property (readonly, nonatomic) NSArray *menuElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL onlyDisplayTitleWhenCollapsed;

@end
