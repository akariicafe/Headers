@class NSArray, NSSet, NSString, NSDate;

@interface PGEnrichableEventSuggestion : NSObject <PGSuggestion>

@property (nonatomic) unsigned char notificationQuality;
@property (nonatomic) unsigned short notificationState;
@property (readonly, nonatomic) unsigned short type;
@property (readonly, nonatomic) unsigned short subtype;
@property (readonly, nonatomic) unsigned short state;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) NSArray *keyAssets;
@property (readonly, nonatomic) NSArray *representativeAssets;
@property (readonly, nonatomic) NSSet *features;
@property (readonly, nonatomic) id recipe;
@property (readonly, copy, nonatomic) NSArray *suggestedPersonLocalIdentifiers;
@property (readonly, nonatomic) BOOL containsUnverifiedPersons;
@property (readonly, nonatomic) NSDate *universalStartDate;
@property (readonly, nonatomic) NSDate *universalEndDate;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) unsigned long long relevanceDurationInDays;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) BOOL isInvalid;
@property (readonly, nonatomic) double score;
@property (readonly, copy, nonatomic) NSArray *reasons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_whitelistedMeaningLabels;
- (id)assetCollectionToShareForAssetCollection:(id)a0 loggingConnection:(id)a1;
- (id)initWithType:(unsigned short)a0 subtype:(unsigned short)a1 enrichableEvent:(id)a2 sharingSuggestionResults:(id)a3 photoLibrary:(id)a4 curationManager:(id)a5 curationContext:(id)a6 loggingConnection:(id)a7 titleGenerationContext:(id)a8;

@end
