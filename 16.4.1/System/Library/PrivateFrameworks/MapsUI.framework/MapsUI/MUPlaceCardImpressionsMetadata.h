@class NSString;

@interface MUPlaceCardImpressionsMetadata : NSObject

@property (nonatomic) unsigned long long moduleIndex;
@property (nonatomic) int moduleType;
@property (nonatomic, getter=isEnriched) BOOL enriched;
@property (nonatomic) unsigned long long businessId;
@property (nonatomic) unsigned int localSearchProviderId;
@property (copy, nonatomic) NSString *query;

- (void).cxx_destruct;

@end
