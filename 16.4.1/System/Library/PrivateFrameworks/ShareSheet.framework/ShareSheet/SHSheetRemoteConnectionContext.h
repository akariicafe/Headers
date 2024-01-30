@class NSString, NSArray, _UIActivityDiscoveryContext, NSData;

@interface SHSheetRemoteConnectionContext : NSObject

@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (retain, nonatomic) _UIActivityDiscoveryContext *discoveryContext;
@property (copy, nonatomic) NSArray *assetIdentifiers;
@property (copy, nonatomic) NSArray *urlsBeingShared;
@property (nonatomic) BOOL shouldSuggestFamilyMembers;
@property (nonatomic) BOOL isSharePlayAvailable;
@property (nonatomic) BOOL supportsCollaboration;
@property (copy, nonatomic) NSArray *peopleSuggestionBundleIds;
@property (copy, nonatomic) NSData *processedImageResultsData;
@property (nonatomic) BOOL instantShareSheet;

- (id)initWithSessionIdentifier:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)createContextDictionary;

@end
