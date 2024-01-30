@interface OADConnection : NSObject {
    unsigned int mDrawableId;
    int mLocationIndex;
}

- (id)description;
- (int)locationIndex;
- (void)setLocationIndex:(int)a0;
- (unsigned int)drawableId;
- (void)setDrawableId:(unsigned int)a0;

@end
