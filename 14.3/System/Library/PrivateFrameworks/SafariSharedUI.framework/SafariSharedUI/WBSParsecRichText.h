@class NSString, NSArray, WBSParsecImageRepresentation, NSNumber;

@interface WBSParsecRichText : WBSParsecModel {
    WBSParsecImageRepresentation *_contentAdvisoryImage;
}

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSNumber *maximumLines;
@property (readonly, nonatomic) NSArray *formattedTextList;
@property (readonly, nonatomic) NSArray *moreGlyphRepresentations;
@property (readonly, nonatomic) NSString *contentAdvisoryString;

+ (id)schema;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)contentAdvisoryImageWithSession:(id)a0;
- (id)moreGlyphsWithSession:(id)a0;

@end
