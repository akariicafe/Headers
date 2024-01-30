@class NSString;

@interface APOdmlSettings : NSObject

@property (readonly, nonatomic) unsigned long long assetManagerType;
@property (readonly, nonatomic) unsigned long long placementType;
@property (readonly, nonatomic) int deploymentID;
@property (readonly, nonatomic) NSString *experimentID;
@property (readonly, nonatomic) NSString *treatmentID;
@property (readonly, nonatomic) NSString *odmlNamespace;
@property (readonly, nonatomic) int odmlVersion;

+ (void)prewarmModelWithPlacementType:(unsigned long long)a0 assetManagerType:(unsigned long long)a1;

- (id)initWithPlacementType:(unsigned long long)a0 assetManagerType:(unsigned long long)a1;

@end
