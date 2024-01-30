@class NSString;

@interface PGMusicCurationFeatures : NSObject {
    void /* unknown type, empty encoding */ memoryCategory;
    void /* unknown type, empty encoding */ memorySubcategory;
    void /* unknown type, empty encoding */ moments;
    void /* unknown type, empty encoding */ momentCollectionDuration;
    void /* unknown type, empty encoding */ momentRatioByLanguageCode;
    void /* unknown type, empty encoding */ mostFrequentMeaningLabel;
    void /* unknown type, empty encoding */ performerIdentifiers;
    void /* unknown type, empty encoding */ inferredUserLanguageCodes;
    void /* unknown type, empty encoding */ maestroSongScoresByAdamID;
    void /* unknown type, empty encoding */ maestroKeywords;
    void /* unknown type, empty encoding */ consistentHash;
    void /* unknown type, empty encoding */ location;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ shouldAvoidColorGrading;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
