@class HMDUIDialogPresenter, NSString, NSObject;
@protocol OS_dispatch_queue, HMDMetricsTTRDataStoring;

@interface HMDMetricsTTRManager : NSObject <RadarDialogPresenting>

@property (readonly, nonatomic) HMDUIDialogPresenter *dialog;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) id<HMDMetricsTTRDataStoring> dataStore;
@property (readonly, nonatomic) id /* block */ dateFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
