@class NSArray, NSMutableOrderedSet;

@interface FCSharedStringIndex : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableOrderedSet *stringsSet;
@property (readonly, nonatomic) NSArray *strings;

- (id)init;
- (id)stringForReference:(int)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStrings:(id)a0;
- (int)referenceForStringReadOnly:(id)a0;
- (int)referenceForString:(id)a0;

@end
