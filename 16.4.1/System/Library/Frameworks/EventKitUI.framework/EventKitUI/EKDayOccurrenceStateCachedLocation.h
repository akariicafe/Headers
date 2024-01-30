@class NSString, NSAttributedString, NSURL;

@interface EKDayOccurrenceStateCachedLocation : NSObject

@property (readonly, nonatomic) NSAttributedString *generatedLocationString;
@property (readonly, nonatomic) NSString *originalOccurrenceLocation;
@property (readonly, nonatomic) NSString *originalOccurrenceLocationWithoutPrediction;
@property (readonly, nonatomic) BOOL originalOccurrenceLocationIsPrediction;
@property (readonly, nonatomic) BOOL originalHasNewTimeProposed;
@property (readonly, nonatomic) NSURL *originalConferenceURL;

- (id)initWithGeneratedLocationString:(id)a0 originalOccurrenceLocation:(id)a1 originalOccurrenceLocationWithoutPrediction:(id)a2 originalOccurrenceLocationIsPrediction:(BOOL)a3 originalHasNewTimeProposed:(BOOL)a4 originalConferenceURL:(id)a5;
- (void).cxx_destruct;

@end
