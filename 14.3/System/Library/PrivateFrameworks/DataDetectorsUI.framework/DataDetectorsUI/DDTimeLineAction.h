@class NSDate;

@interface DDTimeLineAction : DDRemoteAction {
    NSDate *_startDate;
}

+ (id)viewControllerProviderClass;

- (void).cxx_destruct;
- (id)startDate;
- (id)previewActions;
- (id)commitURL;
- (id)platterTitle;
- (id)menuActionClasses;
- (struct CGSize { double x0; double x1; })suggestedContentSize;

@end
