@interface OADGraphic : OADDrawable {
    OADGraphic *mMasterGraphic;
}

- (id)geometry;
- (void).cxx_destruct;
- (id)description;
- (id)graphicProperties;
- (void)setMasterGraphic:(id)a0;
- (id)masterGraphic;

@end
