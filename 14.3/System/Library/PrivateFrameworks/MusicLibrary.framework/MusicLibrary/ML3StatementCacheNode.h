@class NSObject;
@protocol NSCopying;

@interface ML3StatementCacheNode : NSObject

@property (copy, nonatomic) NSObject<NSCopying> *dictionaryKey;
@property (retain, nonatomic) ML3StatementCacheNode *next;

- (void).cxx_destruct;
- (id)initWithDictionaryKey:(id)a0;
- (id)description;

@end
