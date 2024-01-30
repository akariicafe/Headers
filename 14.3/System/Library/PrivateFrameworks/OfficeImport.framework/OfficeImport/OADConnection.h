@interface OADConnection : NSObject {
    unsigned int mDrawableId;
    int mLocationIndex;
}

- (id)description;
- (void)setLocationIndex:(int)a0;
- (int)locationIndex;
- (unsigned int)drawableId;
- (void)setDrawableId:(unsigned int)a0;

@end
