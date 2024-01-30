@interface OADGraphic : OADDrawable {
    OADGraphic *mMasterGraphic;
}

- (id)geometry;
- (id)description;
- (void).cxx_destruct;
- (void)setMasterGraphic:(id)a0;
- (id)graphicProperties;
- (id)masterGraphic;

@end
