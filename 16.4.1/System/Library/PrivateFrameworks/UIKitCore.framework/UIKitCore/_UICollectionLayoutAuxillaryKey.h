@class NSString;

@interface _UICollectionLayoutAuxillaryKey : NSObject <NSCopying> {
    BOOL _isSupplementary;
    NSString *_elementKind;
    long long _index;
    long long _auxillaryKind;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
