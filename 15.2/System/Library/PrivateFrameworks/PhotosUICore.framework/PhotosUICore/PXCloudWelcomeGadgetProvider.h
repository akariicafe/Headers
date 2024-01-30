@class NSArray, NSDate;
@protocol PXCMMCloudGadgetViewControllerDelegate;

@interface PXCloudWelcomeGadgetProvider : PXGadgetProvider <PXForYouRankable>

@property (copy, nonatomic) NSArray *contentGadgets;
@property (readonly, nonatomic) unsigned long long sourceType;
@property (weak, nonatomic) id<PXCMMCloudGadgetViewControllerDelegate> gadgetDelegate;
@property (readonly, nonatomic) NSDate *priorityDate;
@property (readonly, nonatomic) long long defaultPriority;
@property (readonly, nonatomic) long long priorityType;
@property (readonly, nonatomic) unsigned long long gadgetType;

+ (id)new;

- (id)initWithIdentifier:(id)a0;
- (id)initWithSourceType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)didUpdateCloudPhotoLibraryEnablement:(id)a0;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)presentationRequestForWelcomeCloudViewController:(id)a0;
- (void)generateGadgets;
- (void)resetPriorityDate;

@end
