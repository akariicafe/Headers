@interface PLPersistentHistoryTransactionModifiers : NSObject

@property (nonatomic) BOOL syncChangeMarker;
@property (nonatomic) int changeSource;
@property (readonly, nonatomic) BOOL isSyncable;

+ (id)transactionAuthorFromChangeSource:(int)a0 syncChangeMarker:(BOOL)a1;
+ (id)transactionModifiersFromTransactionAuthor:(id)a0;
+ (id)transactionAuthorFromChangeSource:(int)a0;

- (id)description;
- (BOOL)updateFromTransactionAuthor:(id)a0;
- (id)encodeAsTransactionAuthor;
- (id)init;
- (id)_descriptionWithBuilder:(id)a0;
- (id)initWithChangeSource:(int)a0 syncChangeMarker:(BOOL)a1;
- (id)_pl_prettyDescriptionWithIndent:(long long)a0;

@end
