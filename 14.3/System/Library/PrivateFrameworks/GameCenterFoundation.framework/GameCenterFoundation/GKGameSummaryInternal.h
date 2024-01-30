@class NSString, NSNumber, NSSet;

@interface GKGameSummaryInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSNumber *adamID;
@property (retain, nonatomic) NSSet *compatiblePlatforms;
@property (nonatomic) BOOL isArcade;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)description;
- (id)initWithGameSummary:(id)a0;

@end
