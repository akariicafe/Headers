@class NSString, UIIndexBarView;

@interface UIIndexBarVisualStyle_Base : NSObject <UIIndexBarVisualStyle>

@property (weak, nonatomic) UIIndexBarView *indexBarView;
@property (readonly, nonatomic) BOOL canBecomeFocused;
@property (readonly, nonatomic) BOOL overlay;
@property (readonly, nonatomic) double minLineHeight;
@property (readonly, nonatomic) double indexWidth;
@property (nonatomic) BOOL expanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)containerViewForIndexBar:(id)a0;

@end
