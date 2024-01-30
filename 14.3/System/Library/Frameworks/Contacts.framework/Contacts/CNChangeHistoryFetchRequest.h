@class NSString, NSData, NSArray;

@interface CNChangeHistoryFetchRequest : CNFetchRequest <NSSecureCoding> {
    BOOL _enforceClientIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *clientIdentifier;
@property (nonatomic) BOOL includeChangeAnchors;
@property (nonatomic) BOOL includeChangeIDs;
@property (nonatomic) BOOL includeExternalIDs;
@property (nonatomic) BOOL includeImagesChanged;
@property (nonatomic) BOOL includeLabeledValueChanges;
@property (retain, nonatomic) NSString *containerIdentifier;
@property (nonatomic) BOOL unifyResults;
@property (copy, nonatomic) NSData *startingToken;
@property (copy, nonatomic) NSArray *additionalContactKeyDescriptors;
@property (nonatomic) BOOL shouldUnifyResults;
@property (nonatomic) BOOL mutableObjects;
@property (nonatomic) BOOL includeGroupChanges;
@property (copy, nonatomic) NSArray *excludedTransactionAuthors;

- (void).cxx_destruct;
- (void)setStartingAnchor:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithClientIdentifier:(id)a0;
- (void)acceptVisitor:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
