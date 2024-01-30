@class NSString;

@interface VUIDocumentContextDataTVShow : VUIDocumentContextData

@property (readonly, copy, nonatomic) NSString *showID;
@property (readonly, copy, nonatomic) NSString *episodeID;

- (void).cxx_destruct;
- (id)jsonData;
- (id)initWithShowID:(id)a0 episodeID:(id)a1;

@end
