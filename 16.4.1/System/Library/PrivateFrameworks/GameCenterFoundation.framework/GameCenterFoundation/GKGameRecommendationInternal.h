@class NSString;

@interface GKGameRecommendationInternal : GKGameInternal

@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSString *engineID;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)initWithGame:(id)a0;
- (id)serverRepresentation;

@end
