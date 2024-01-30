@class OADMovie, OADOle, OADShapeGeometry;

@interface OADImage : OADGraphic {
    OADShapeGeometry *mGeometry;
    OADOle *mOle;
    OADMovie *mMovie;
}

- (id)movie;
- (id)ole;
- (id)geometry;
- (void)setMovie:(id)a0;
- (id)description;
- (id)imageProperties;
- (void).cxx_destruct;
- (id)init;
- (void)setGeometry:(id)a0;
- (void)setOle:(id)a0;
- (id)initWithBlipRef:(id)a0;
- (void)setParentTextListStyle:(id)a0;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)a0;
- (id)createImageFill;
- (void)createPictureFramePresetGeometry;

@end
