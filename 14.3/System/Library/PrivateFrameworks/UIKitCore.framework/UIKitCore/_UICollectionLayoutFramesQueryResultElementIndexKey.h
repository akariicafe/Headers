@class NSString;

@interface _UICollectionLayoutFramesQueryResultElementIndexKey : NSObject <NSCopying> {
    NSString *_element;
    long long _index;
}

+ (id)elementIndexKeyForElement:(id)a0 index:(long long)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithElement:(id)a0 index:(long long)a1;

@end
