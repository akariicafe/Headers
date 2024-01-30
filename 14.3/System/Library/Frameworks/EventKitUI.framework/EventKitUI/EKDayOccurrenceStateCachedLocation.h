@class NSString;

@interface EKDayOccurrenceStateCachedLocation : NSObject

@property (readonly, nonatomic) NSString *generatedLocationString;
@property (readonly, nonatomic) NSString *originalOccurrenceLocation;
@property (readonly, nonatomic) NSString *originalOccurrenceLocationWithoutPrediction;
@property (readonly, nonatomic) BOOL originalOccurrenceLocationIsPrediction;
@property (readonly, nonatomic) BOOL originalHasNewTimeProposed;

- (void).cxx_destruct;
- (id)initWithGeneratedLocationString:(id)a0 originalOccurrenceLocation:(id)a1 originalOccurrenceLocationWithoutPrediction:(id)a2 originalOccurrenceLocationIsPrediction:(BOOL)a3 originalHasNewTimeProposed:(BOOL)a4;

@end
