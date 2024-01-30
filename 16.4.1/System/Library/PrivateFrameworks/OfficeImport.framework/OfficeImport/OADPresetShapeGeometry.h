@interface OADPresetShapeGeometry : OADShapeGeometry {
    int mType;
}

- (int)type;
- (void)setType:(int)a0;
- (id)description;
- (id)equivalentCustomGeometry;
- (id)escherEquivalentCustomGeometry;
- (id)oa12EquivalentCustomGeometry;

@end
