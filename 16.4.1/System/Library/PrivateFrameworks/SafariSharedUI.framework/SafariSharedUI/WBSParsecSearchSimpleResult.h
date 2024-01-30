@class NSString, NSArray, WBSParsecSearchMapsResultFeedbackSender, WBSParsecImageRepresentation, NSNumber;
@protocol WBSParsecSearchSession;

@interface WBSParsecSearchSimpleResult : WBSParsecLegacySearchResult <WBSParsecSearchSimpleResult> {
    WBSParsecImageRepresentation *_titleGlyph;
    NSArray *_moreIconRepresentations;
}

@property (readonly, nonatomic) NSNumber *titleMaximumNumberOfLines;
@property (readonly, nonatomic) NSString *descriptionLeadInText;
@property (readonly, nonatomic) NSNumber *descriptionMaximumNumberOfLines;
@property (readonly, nonatomic) BOOL descriptionTextCanWrap;
@property (readonly, nonatomic) NSString *footnote;
@property (readonly, nonatomic) BOOL hasSingleLineDescriptionAndTitle;
@property (retain, nonatomic) id<WBSParsecSearchSession> parsecSearchSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) WBSParsecSearchMapsResultFeedbackSender *mapsFeedbackSender;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)titleGlyphWithSession:(id)a0;

@end
