@class NSArray, NSString;

@interface HMIDESDataset : HMFObject <HMFLogging>

@property (readonly) NSArray *samples;
@property (readonly) NSString *imageName;
@property (readonly) NSString *boxesName;
@property (readonly) NSString *weightsName;
@property (readonly) NSString *classesName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
