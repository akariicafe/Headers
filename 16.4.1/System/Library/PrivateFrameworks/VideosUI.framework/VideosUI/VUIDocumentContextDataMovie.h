@class NSString;

@interface VUIDocumentContextDataMovie : VUIDocumentContextData

@property (readonly, copy, nonatomic) NSString *movieID;

- (id)jsonData;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMovieID:(id)a0;

@end
