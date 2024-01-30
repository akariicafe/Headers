@interface GEOPolylineCoordinateArray : NSObject <NSFastEnumeration, NSSecureCoding> {
    struct vector<geo::PolylineCoordinate, std::allocator<geo::PolylineCoordinate>> { struct PolylineCoordinate *__begin_; struct PolylineCoordinate *__end_; struct __compressed_pair<geo::PolylineCoordinate *, std::allocator<geo::PolylineCoordinate>> { struct PolylineCoordinate *__value_; } __end_cap_; } _polylineCoordinates;
    unsigned long long _mutationsCount;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long count;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)addCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a0;
- (struct PolylineCoordinate { unsigned int x0; float x1; })coordinateAtIndex:(unsigned long long)a0;

@end
