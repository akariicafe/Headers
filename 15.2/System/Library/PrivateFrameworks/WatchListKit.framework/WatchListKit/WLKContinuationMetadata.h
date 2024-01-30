@class NSString, NSArray, NSNumber, WLKPlayable;

@interface WLKContinuationMetadata : WLKContinuationMetadataBase

@property (readonly, nonatomic) WLKPlayable *playable;
@property (readonly, copy, nonatomic) NSString *deleteID;
@property (readonly, copy, nonatomic) NSNumber *siriActionsExpirationEpochMillis;
@property (readonly, copy, nonatomic) NSArray *siriActionsCategories;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 context:(id)a1;

@end
