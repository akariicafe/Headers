@class WBSParsecAuxiliaryInfo, NSArray, NSString, WBSParsecImageRepresentation, NSNumber, WBSParsecActionButton;

@interface WBSParsecSearchGenericResult : WBSParsecLegacySearchResult <WBSParsecSearchGenericResult> {
    WBSParsecActionButton *_actionButton;
}

@property (readonly, nonatomic) NSNumber *titleMaximumLines;
@property (readonly, copy, nonatomic) NSArray *descriptionRichTexts;
@property (readonly, copy, nonatomic) NSString *footnote;
@property (readonly, copy, nonatomic) NSString *secondaryTitle;
@property (readonly, nonatomic) WBSParsecImageRepresentation *secondaryTitleGlyph;
@property (readonly, nonatomic) WBSParsecAuxiliaryInfo *auxiliaryInfo;
@property (readonly, nonatomic) WBSParsecImageRepresentation *thumbnail;

+ (id)_specializedSchema;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)actionButton;
- (id)thumbnailWithSession:(id)a0;

@end
