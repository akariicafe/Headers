@class MAAutoAssetInfoInstance, MAAutoAssetSelector, MAAutoAssetStatus, MAAutoAssetInfoFound, MAAutoAssetInfoDesire;

@interface MADAutoAssetJobInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) MAAutoAssetSelector *initialAssetSelector;
@property (retain, nonatomic) MAAutoAssetSelector *fullAssetSelector;
@property (retain, nonatomic) MAAutoAssetInfoInstance *clientInstance;
@property (retain, nonatomic) MAAutoAssetInfoDesire *clientDesire;
@property (retain, nonatomic) MAAutoAssetInfoFound *foundContent;
@property (retain, nonatomic) MAAutoAssetStatus *currentStatus;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initForAssetSelector:(id)a0;
- (id)summary;
- (id)description;
- (void).cxx_destruct;

@end
