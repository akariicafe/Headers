@class NSDictionary, NSData, NSDate;

@interface WBSPasswordBreachResultQuery : NSObject

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *persistentIdentifier;
@property (readonly, nonatomic) NSDate *dateLastModified;

+ (id)resultQueriesFromDictionaryRepresentations:(id)a0;
+ (id)dictionaryRepresentationsForResultQueries:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)description;
- (id)initWithPersistentIdentifier:(id)a0 dateLastModified:(id)a1;

@end
