@class NSArray, NSDictionary, NSString;

@interface CPLaneGuidance : NSObject <CRAccNavIndexedInfoProviding, CPAccNavPrimaryUpdateProtocol, NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) NSArray *accNavParameters;
@property (class, readonly, nonatomic) NSDictionary *accNavParametersIndexed;
@property (class, readonly, nonatomic) NSDictionary *accNavParameterKeysIndexed;
@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned short index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned short componentID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned short componentID;
@property (nonatomic) unsigned short index;
@property (copy, nonatomic) NSArray *lanes;
@property (copy, nonatomic) NSArray *instructionVariants;


- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearValueForKey:(id)a0;
- (id)laneGuidanceWithComponent:(id)a0;
- (id)navInfoWithComponent:(id)a0;

@end
