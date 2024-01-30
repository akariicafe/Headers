@class NSString;

@interface GKGameRecommendationInternal : GKGameInternal

@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSString *engineID;

+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (id)initWithGame:(id)a0;
- (id)serverRepresentation;

@end
