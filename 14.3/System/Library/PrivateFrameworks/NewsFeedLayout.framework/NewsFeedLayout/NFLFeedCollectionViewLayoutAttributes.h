@interface NFLFeedCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes

@property (nonatomic) long long cellType;
@property (nonatomic) long long columnSpan;
@property (nonatomic) long long rowSpan;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)protobufRepresentationnormalizedWithFeedGutter:(double)a0;
- (unsigned long long)hash;
- (void)populateWithProtobuf:(id)a0 normalizedWithFeedGutter:(double)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
