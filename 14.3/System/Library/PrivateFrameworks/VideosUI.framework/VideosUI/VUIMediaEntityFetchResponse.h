@class NSArray;

@interface VUIMediaEntityFetchResponse : NSObject <NSCopying>

@property (nonatomic) unsigned long long mediaEntitySubtype;
@property (copy, nonatomic) NSArray *mediaEntities;
@property (copy, nonatomic) NSArray *sortIndexes;
@property (copy, nonatomic) NSArray *grouping;
@property (copy, nonatomic) NSArray *groupingSortIndexes;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)_updateWithResponse:(id)a0 changes:(id)a1 replaceContentsOnNilChanges:(BOOL)a2;

@end
