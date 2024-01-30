@class NSArray, NSString;

@interface _GEOPlaceSearchCompletionGroup : NSObject <GEOCompletionGroup>

@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSString *localizedSectionHeader;
@property (readonly, nonatomic) BOOL shouldInterleaveClientResults;
@property (readonly, nonatomic) BOOL enforceServerResultsOrder;
@property (readonly, nonatomic) BOOL enableMapsSuggestServerReranking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSection:(id)a0 traits:(id)a1 entryListIndex:(int)a2 mapItems:(id)a3 collections:(id)a4 publishers:(id)a5;

@end
