@interface PLPersistentHistoryTransactionModifiers : NSObject

@property (nonatomic) BOOL syncChangeMarker;
@property (nonatomic) int changeSource;
@property (readonly, nonatomic) BOOL isSyncable;

+ (id)transactionModifiersFromTransactionAuthor:(id)a0;
+ (id)transactionAuthorFromChangeSource:(int)a0 syncChangeMarker:(BOOL)a1;

- (id)init;
- (id)initWithChangeSource:(int)a0 syncChangeMarker:(BOOL)a1;
- (id)encodeAsTransactionAuthor;
- (BOOL)updateFromTransactionAuthor:(id)a0;
- (id)_descriptionWithBuilder:(id)a0;
- (id)description;
- (id)_pl_prettyDescriptionWithIndent:(long long)a0;

@end
