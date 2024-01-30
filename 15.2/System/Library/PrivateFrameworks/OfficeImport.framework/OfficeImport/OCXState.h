@class CXNamespace;

@interface OCXState : NSObject

@property (readonly, nonatomic) int xmlFormat;
@property (retain, nonatomic) CXNamespace *OCXRelationshipsNamespace;
@property (retain, nonatomic) CXNamespace *OCXDrawingNamespace;

- (void).cxx_destruct;
- (id)init;
- (void)setupNSForXMLFormat:(int)a0;
- (id)OCXThemeRelationshipType;
- (id)OCXStylesRelationshipType;
- (id)OCXSharedStringsRelationshipType;
- (id)OCXDrawingRelationshipType;
- (id)OCXEndnotesRelationshipType;
- (id)OCXFontTableRelationshipType;
- (id)OCXFootnotesRelationshipType;
- (id)OCXCommentsRelationshipType;
- (id)OCXCommentsExtendedRelationshipType;
- (id)OCXPivotTableRelationshipType;
- (id)OCXTableRelationshipType;
- (id)OCXSlideMasterRelationshipType;
- (id)OCXSlideLayoutRelationshipType;
- (id)OCXSlideRelationshipType;
- (id)OCXNotesSlideRelationshipType;
- (id)OCXCommentAuthorsRelationshipType;
- (id)OCXCustomXmlRelationshipType;
- (id)OCXLegacyDocTextInfoRelationshipType;
- (id)OCXThemeOverrideRelationshipType;
- (id)OCXVmlDrawingRelationshipType;
- (id)OCXNotesMasterRelationshipType;
- (id)OCXNumberingRelationshipType;
- (id)OCXPackagePresPropsRelationshipType;
- (id)OCXPackageViewPropsRelationshipType;
- (id)OCXTableStylesRelationshipType;
- (id)OCXSettingsRelationshipType;
- (void)setXmlFormat:(int)a0;

@end
