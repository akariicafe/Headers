@class NSSet, NSDictionary, NTKFace, NSString, NSError;

@interface NTKGreenfieldAnalyticsModel : NSObject

@property (copy, nonatomic) NTKFace *watchFace;
@property (copy, nonatomic) NSSet *purchasedComplicationsItemIds;
@property (copy, nonatomic) NSSet *skippedComplicationsItemIds;
@property (copy, nonatomic) NSDictionary *complicationSlotToIdMapping;
@property (copy, nonatomic) NSString *addFaceFlowExitScreenName;
@property (copy, nonatomic) NSString *distributionMechanism;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *errorMessage;

- (void).cxx_destruct;

@end
