@class NSString;

@interface _UICollectionLayoutAuxillaryKey : NSObject <NSCopying> {
    BOOL _isSupplementary;
    NSString *_elementKind;
    long long _index;
    long long _auxillaryKind;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
