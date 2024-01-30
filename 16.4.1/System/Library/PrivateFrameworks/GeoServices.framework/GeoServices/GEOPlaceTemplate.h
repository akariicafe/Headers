@class NSTimeZone, NSString, NSMapTable, GEOMapItemIdentifier, GEOPDTemplateData, GEOFeatureStyleAttributes, GEOPlaceLineTemplate;
@protocol GEOMapItemPhoto;

@interface GEOPlaceTemplate : NSObject {
    GEOPDTemplateData *_templateData;
    NSTimeZone *_timeZone;
    NSMapTable *_attributionMap;
}

@property (readonly, nonatomic) GEOMapItemIdentifier *mapItemIdentifier;
@property (readonly, nonatomic) BOOL supportsAreaHighlight;
@property (readonly, nonatomic) BOOL hasRichData;
@property (readonly, nonatomic) id<GEOMapItemPhoto> heroImage;
@property (readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property (readonly, nonatomic) NSString *placeName;
@property (readonly, nonatomic) GEOPlaceLineTemplate *subtitleLine;
@property (readonly, nonatomic) GEOPlaceLineTemplate *footerLine;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 supportsAreaHighlight:(BOOL)a1;
- (id)initWithPlaceTemplate:(id)a0 attributionMap:(id)a1;

@end
