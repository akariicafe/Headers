@class NSArray, NSDate;
@protocol PXCMMCloudGadgetViewControllerDelegate;

@interface PXCloudWelcomeGadgetProvider : PXGadgetProvider <PXForYouRankable>

@property (copy, nonatomic) NSArray *contentGadgets;
@property (readonly, nonatomic) unsigned long long sourceType;
@property (weak, nonatomic) id<PXCMMCloudGadgetViewControllerDelegate> gadgetDelegate;
@property (readonly, nonatomic) NSDate *mostRecentContentDate;
@property (readonly, nonatomic) long long forYouContentIdentifier;

+ (id)new;

- (id)initWithIdentifier:(id)a0;
- (unsigned long long)gadgetType;
- (void)generateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (id)priorityDate;
- (id)initWithSourceType:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)didUpdateCloudPhotoLibraryEnablement:(id)a0;
- (void)presentationRequestForWelcomeCloudViewController:(id)a0;
- (void)resetPriorityDate;

@end
