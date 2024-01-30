@class NSString, NSArray, UIView;

@interface PXStoryAlertConfiguration : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSArray *actionTitles;
@property (nonatomic) BOOL appendCancelAction;
@property (nonatomic) BOOL preferActionSheetStyle;
@property (weak, nonatomic) UIView *sourceView;

- (void).cxx_destruct;

@end
