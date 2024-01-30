@interface OADConnection : NSObject {
    unsigned int mDrawableId;
    int mLocationIndex;
}

- (void)setLocationIndex:(int)a0;
- (int)locationIndex;
- (id)description;
- (unsigned int)drawableId;
- (void)setDrawableId:(unsigned int)a0;

@end
