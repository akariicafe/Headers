@class NSString, NSMutableArray;

@interface WBSParsecSearchMoviesResult : WBSParsecLegacySearchResult {
    NSMutableArray *_posterRepresentations;
}

@property (readonly, nonatomic) NSString *descriptionLeadInText;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)postersWithSession:(id)a0;

@end
