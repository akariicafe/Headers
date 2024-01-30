@class NSString, NSArray, WFImage, WFDailyRoutineShortcutSetupFlow;

@interface WFDailyRoutineShortcut : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) WFImage *bannerImage;
@property (readonly, copy, nonatomic) NSArray *actionIcons;
@property (readonly, nonatomic) WFDailyRoutineShortcutSetupFlow *setupFlow;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 bannerImage:(id)a2 actionIcons:(id)a3 setupFlow:(id)a4;

@end
