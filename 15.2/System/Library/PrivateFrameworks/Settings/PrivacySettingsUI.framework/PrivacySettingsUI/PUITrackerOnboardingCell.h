@class NSString, NSObject;
@protocol PUITrackerOnboardingCellDelegate;

@interface PUITrackerOnboardingCell : PSTableCell <UITextViewDelegate>

@property (weak, nonatomic) NSObject<PUITrackerOnboardingCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
