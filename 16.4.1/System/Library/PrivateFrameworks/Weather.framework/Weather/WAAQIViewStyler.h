@interface WAAQIViewStyler : NSObject

+ (id)shadowColor;
+ (id)textColorWithLightLabel:(BOOL)a0;

- (id)stringWithLogoImageFromText:(id)a0 attribution:(id)a1 attr:(id)a2;
- (id)styledAQICategoryText:(id)a0 mode:(struct { unsigned long long x0; unsigned long long x1; })a1;
- (id)styledAQILocalizedIndexText:(id)a0 mode:(struct { unsigned long long x0; unsigned long long x1; })a1;
- (id)styledAQIMetadataCitationText:(id)a0 attribution:(id)a1 shouldInsertGlyph:(BOOL)a2;
- (id)styledAQIMetadataGradeText:(id)a0;
- (id)styledAQIMetadataRecommendationText:(id)a0;
- (id)styledAQIMetadataSourceText:(id)a0;
- (id)styledAQIText:(id)a0 mode:(struct { unsigned long long x0; unsigned long long x1; })a1;
- (id)styledDashWithLabelColor:(BOOL)a0;

@end
