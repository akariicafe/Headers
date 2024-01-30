@class NSString;

@interface VUIDocumentContextDataMovieBundle : VUIDocumentContextData

@property (readonly, copy, nonatomic) NSString *movieBundleID;

- (id)jsonData;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMovieBundleID:(id)a0;

@end
