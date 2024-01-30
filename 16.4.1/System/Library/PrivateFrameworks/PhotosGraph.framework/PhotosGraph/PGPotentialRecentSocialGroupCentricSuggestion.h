@class NSArray, NSDate;

@interface PGPotentialRecentSocialGroupCentricSuggestion : NSObject

@property (readonly, nonatomic) NSArray *personLocalIdentifiers;
@property (readonly, nonatomic) NSArray *personWeights;
@property (readonly, nonatomic) NSArray *momentLocalIdentifiers;
@property (readonly, nonatomic) float weight;
@property (retain, nonatomic) NSArray *assets;
@property (retain, nonatomic) NSDate *notSeenSinceDate;

- (void).cxx_destruct;
- (id)initWithPersonLocalIdentifiers:(id)a0 personWeights:(id)a1 momentLocalIdentifiers:(id)a2 weight:(float)a3 notSeenSinceDate:(id)a4;

@end
