@class NSString, NSArray, NSSet, NSDate, PHAsset;

@interface PGSingleAssetSuggestion : NSObject <PGSuggestion> {
    PHAsset *_asset;
}

@property (retain, nonatomic) id recipe;
@property (nonatomic) unsigned long long relevanceDurationInDays;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL isInvalid;
@property (nonatomic) double score;
@property (copy, nonatomic) NSArray *reasons;
@property (readonly, nonatomic) unsigned short type;
@property (readonly, nonatomic) unsigned short subtype;
@property (readonly, nonatomic) unsigned short state;
@property (readonly, nonatomic) unsigned short notificationState;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) NSArray *keyAssets;
@property (readonly, nonatomic) NSArray *representativeAssets;
@property (readonly, nonatomic) NSSet *features;
@property (readonly, copy, nonatomic) NSArray *suggestedPersonLocalIdentifiers;
@property (readonly, nonatomic) BOOL containsUnverifiedPersons;
@property (readonly, nonatomic) NSDate *universalStartDate;
@property (readonly, nonatomic) NSDate *universalEndDate;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) unsigned char notificationQuality;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithType:(unsigned short)a0 subtype:(unsigned short)a1 asset:(id)a2;

@end
