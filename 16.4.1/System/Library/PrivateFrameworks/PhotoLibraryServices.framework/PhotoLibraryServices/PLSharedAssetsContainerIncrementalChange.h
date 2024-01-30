@class NSArray;

@interface PLSharedAssetsContainerIncrementalChange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long collectionChangeType;
@property (nonatomic) long long sharingChange;
@property (nonatomic) unsigned char suggestionStateChange;
@property (nonatomic) unsigned char mediaType;
@property (nonatomic) BOOL hasNoOtherAssetChangesRequiringMomentGeneration;
@property (retain, nonatomic) NSArray *highlightContainerChanges;

- (void)encodeWithCoder:(id)a0;
- (BOOL)hasChanges;
- (id)initWithCoder:(id)a0;
- (BOOL)hasChangesAffectingSharingComposition;
- (BOOL)hasSuggestionChanges;
- (BOOL)hasSharingOrSuggestionChanges;
- (void)mergeChangesFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)hasSharingChanges;
- (id)init;
- (void)addHighlightContainerChange:(id)a0 sourceHighlightID:(id)a1 destinationHighlightID:(id)a2;
- (void).cxx_destruct;

@end
