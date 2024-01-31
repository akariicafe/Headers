@class CNChangeHistoryAnchor, NSString, NSArray, NSData;

@interface CNChangeHistoryFetchRequest : CNFetchRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long resultType;
@property (readonly, nonatomic) CNChangeHistoryAnchor *startingAnchor;
@property (readonly, nonatomic, getter=shouldEnforceClientIdentifer) BOOL enforceClientIdentifier;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (nonatomic) BOOL includeChangeAnchors;
@property (nonatomic) BOOL includeChangeIDs;
@property (nonatomic) BOOL includeExternalIDs;
@property (nonatomic) BOOL includeImagesChanged;
@property (nonatomic) BOOL includeLabeledValueChanges;
@property (nonatomic) BOOL includeLinkingChanges;
@property (nonatomic) BOOL includeMeCardChanges;
@property (retain, nonatomic) NSString *containerIdentifier;
@property (nonatomic) BOOL unifyResults;
@property (copy, nonatomic) NSData *startingToken;
@property (copy, nonatomic) NSArray *additionalContactKeyDescriptors;
@property (nonatomic) BOOL shouldUnifyResults;
@property (nonatomic) BOOL mutableObjects;
@property (nonatomic) BOOL includeGroupChanges;
@property (copy, nonatomic) NSArray *excludedTransactionAuthors;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithClientIdentifier:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)setStartingAnchor:(id)a0;
- (void)acceptVisitor:(id)a0;
- (id)initWithCoder:(id)a0;

@end
