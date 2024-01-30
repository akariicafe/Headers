@class NSObject;
@protocol NSCopying;

@interface ML3StatementCacheNode : NSObject

@property (copy, nonatomic) NSObject<NSCopying> *dictionaryKey;
@property (retain, nonatomic) ML3StatementCacheNode *next;

- (id)initWithDictionaryKey:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
