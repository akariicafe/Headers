@class OADMovie, OADOle, OADShapeGeometry;

@interface OADImage : OADGraphic {
    OADShapeGeometry *mGeometry;
    OADOle *mOle;
    OADMovie *mMovie;
}

- (id)geometry;
- (void)setGeometry:(id)a0;
- (id)ole;
- (id)movie;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)setMovie:(id)a0;
- (id)imageProperties;
- (void)setOle:(id)a0;
- (id)initWithBlipRef:(id)a0;
- (void)setParentTextListStyle:(id)a0;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)a0;
- (id)createImageFill;
- (void)createPictureFramePresetGeometry;

@end
