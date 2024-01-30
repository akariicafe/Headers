@class NSArray, NSString;

@interface PGMeaningPOICriteria : NSObject <PGMeaningCriteria>

@property (retain, nonatomic) NSArray *positivePOIs;
@property (retain, nonatomic) NSArray *negativePOIs;
@property (nonatomic) unsigned long long minimumNumberOfPOIs;
@property (nonatomic) BOOL mustBeSpecial;
@property (nonatomic) double maximumParkDiameter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)a0;

- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)_parkIsLargerThanMaximumDiameterWithAreaNodes:(id)a0;
- (BOOL)passesForAssets:(id)a0;
- (BOOL)passesForMomentNode:(id)a0 momentNodeCache:(id)a1;

@end
