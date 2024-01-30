@class NSData, NSDictionary, NSDate;

@interface WBSPasswordBreachResultRecord : NSObject

@property (readonly, nonatomic) NSData *persistentIdentifier;
@property (readonly, nonatomic) unsigned long long result;
@property (readonly, nonatomic) NSDate *dateLastModified;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)dictionaryRepresentationsForResultRecords:(id)a0;
+ (id)resultRecordsFromDictionaryRepresentations:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)description;
- (id)initWithPersistentIdentifier:(id)a0 result:(unsigned long long)a1 dateLastModified:(id)a2;

@end
