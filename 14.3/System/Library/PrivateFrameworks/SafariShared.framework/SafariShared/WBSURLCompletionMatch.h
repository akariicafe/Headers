@class NSString, SFSearchResult, WBSQuerySuggestion;

@interface WBSURLCompletionMatch : NSObject <WBSCompletionListItem> {
    NSString *_userInput;
    SFSearchResult *_sfSearchResultValue;
}

@property (readonly, nonatomic) long long matchLocation;
@property (readonly, nonatomic) BOOL matchLocationIsInURL;
@property (readonly, nonatomic, getter=isTopHit) BOOL topHit;
@property (readonly, nonatomic) BOOL shouldPreload;
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

+ (long long)matchLocationForString:(id)a0 inURLString:(id)a1;
+ (long long)matchLocationForString:(id)a0 inTitle:(id)a1;

@end
