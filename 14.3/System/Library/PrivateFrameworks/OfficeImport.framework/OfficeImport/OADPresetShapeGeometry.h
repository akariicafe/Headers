@interface OADPresetShapeGeometry : OADShapeGeometry {
    int mType;
}

- (void)setType:(int)a0;
- (id)description;
- (int)type;
- (id)equivalentCustomGeometry;
- (id)oa12EquivalentCustomGeometry;
- (id)escherEquivalentCustomGeometry;

@end
