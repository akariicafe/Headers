@interface PICurveControlPoint : NSObject <NSCopying>

@property (readonly, nonatomic) double x;
@property (readonly, nonatomic) double y;
@property (readonly, nonatomic, getter=isEditable) BOOL editable;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithX:(double)a0 y:(double)a1 editable:(BOOL)a2;

@end
