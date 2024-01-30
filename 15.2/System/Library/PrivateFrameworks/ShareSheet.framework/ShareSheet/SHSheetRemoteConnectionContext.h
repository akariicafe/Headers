@class NSString, NSArray, _UIActivityDiscoveryContext;

@interface SHSheetRemoteConnectionContext : NSObject

@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (retain, nonatomic) _UIActivityDiscoveryContext *discoveryContext;
@property (copy, nonatomic) NSArray *assetIdentifiers;
@property (copy, nonatomic) NSArray *urlsBeingShared;
@property (nonatomic) BOOL shouldSuggestFamilyMembers;
@property (nonatomic) BOOL slotsRenderingDisabled;

- (void).cxx_destruct;
- (id)initWithSessionIdentifier:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)createContextDictionary;

@end
