@class NSArray, NSMutableDictionary;

@interface PXLayoutSection : NSObject {
    NSMutableDictionary *_geometriesByKind;
}

@property (nonatomic) unsigned long long identifier;
@property (nonatomic, getter=isAccurate) BOOL accurate;
@property (nonatomic) long long index;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (retain, nonatomic) NSArray *geometryKinds;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)setGeometries:(id)a0 withKind:(long long)a1;
- (id)geometriesWithKind:(long long)a0;
- (void)enumerateGeometriesWithBlock:(id /* block */)a0;

@end
