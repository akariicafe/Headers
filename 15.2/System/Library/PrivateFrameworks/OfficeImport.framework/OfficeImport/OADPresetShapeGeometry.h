@interface OADPresetShapeGeometry : OADShapeGeometry {
    int mType;
}

- (id)description;
- (int)type;
- (void)setType:(int)a0;
- (id)equivalentCustomGeometry;
- (id)oa12EquivalentCustomGeometry;
- (id)escherEquivalentCustomGeometry;

@end
