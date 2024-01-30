@interface PGSharingSuggestionOptions : NSObject

@property (nonatomic) unsigned long long sharingStream;
@property (nonatomic) unsigned long long fetchLimit;
@property (nonatomic) BOOL includeUnverified;
@property (nonatomic) BOOL replaceMergeCandidates;
@property (nonatomic) BOOL debugMode;
@property (nonatomic) BOOL filterLowWeightResults;
@property (nonatomic) BOOL useContactSuggestion;

+ (id)optionsForClient:(unsigned long long)a0;
+ (unsigned long long)_shareSheetSharingStream;

- (id)init;
- (id)description;

@end
