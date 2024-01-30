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
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)contentAdvisoryImageWithSession:(id)a0;
- (id)moreGlyphsWithSession:(id)a0;

@end
