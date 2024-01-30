@class NSString;

@interface VUIDocumentContextDataTVShow : VUIDocumentContextData

@property (readonly, copy, nonatomic) NSString *showID;
@property (readonly, copy, nonatomic) NSString *episodeID;

- (id)jsonData;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithShowID:(id)a0 episodeID:(id)a1;

@end
