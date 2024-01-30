@class NSDate;

@interface DDTimeLineAction : DDRemoteAction {
    NSDate *_startDate;
}

+ (id)viewControllerProviderClass;

- (id)startDate;
- (void).cxx_destruct;
- (id)previewActions;
- (id)commitURL;
- (id)menuActionClasses;
- (id)platterTitle;
- (struct CGSize { double x0; double x1; })suggestedContentSize;

@end
