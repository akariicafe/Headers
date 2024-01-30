@class NSURL, HMIDESDataset, NSString;

@interface HMIDESTrainer : HMFObject <HMFLogging>

@property (readonly) HMIDESDataset *data;
@property (readonly) NSURL *networkPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
