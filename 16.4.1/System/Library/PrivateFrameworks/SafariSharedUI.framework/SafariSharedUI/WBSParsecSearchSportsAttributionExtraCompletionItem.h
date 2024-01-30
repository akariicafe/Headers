@class WBSQuerySuggestion, NSString, SFSearchResult, NSURL, WBSParsecImageRepresentation;

@interface WBSParsecSearchSportsAttributionExtraCompletionItem : WBSParsecModel <WBSCompletionListItem>

@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) WBSParsecImageRepresentation *imageRepresentation;
@property (readonly, nonatomic) NSString *parsecDomainIdentifier;
@property (readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property (readonly, nonatomic) unsigned long long engagementDestination;
@property (nonatomic) long long parsecQueryID;
@property (readonly, nonatomic) NSString *lastSearchQuery;
@property (retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)schema;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
