@class WBSQuerySuggestion, NSString, SFSearchResult, NSURL, WBSParsecImageRepresentation, WBSParsecActionButton, MKMapItem;

@interface WBSParsecLegacySearchResult : WBSParsecModel <WBSParsecSearchResult, WBSCompletionListItem> {
    BOOL _topHit;
    SFSearchResult *_sfSearchResult;
}

@property (readonly, nonatomic) unsigned long long legacyType;
@property (retain, nonatomic) SFSearchResult *sfSearchResultValue;
@property (copy, nonatomic) NSString *sectionBundleIdentifier;
@property (nonatomic) long long parsecQueryID;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *feedbackIdentifier;
@property (readonly, nonatomic) NSString *urlString;
@property (readonly, nonatomic) NSString *sectionHeader;
@property (readonly, nonatomic) NSString *completion;
@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;
@property (readonly, nonatomic) NSURL *appPunchoutURL;
@property (readonly, copy, nonatomic) NSString *mediaKind;
@property (readonly, copy, nonatomic) NSString *referrerForLoadingResult;
@property (readonly, nonatomic) WBSParsecActionButton *actionButton;
@property (readonly, nonatomic) MKMapItem *mapItem;
@property (readonly, nonatomic) WBSParsecImageRepresentation *icon;
@property (readonly, nonatomic) WBSParsecImageRepresentation *completionIcon;
@property (readonly, nonatomic) NSString *parsecDomainIdentifier;
@property (readonly, nonatomic) unsigned long long engagementDestination;
@property (readonly, nonatomic) NSString *lastSearchQuery;
@property (retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)schema;
+ (Class)_resultClassForDictionary:(id)a0;
+ (id)_specializedSchema;
+ (id)resultWithDictionary:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)_glyphRepresentationsFromGlyphDictionaries:(id)a0;
- (id)_glyphsFromGlyphRepresentations:(id)a0 withSession:(id)a1;
- (BOOL)canBecomeTopHitForQuery:(id)a0;
- (id)completionIconWithSession:(id)a0;
- (id)iconWithSession:(id)a0;

@end
