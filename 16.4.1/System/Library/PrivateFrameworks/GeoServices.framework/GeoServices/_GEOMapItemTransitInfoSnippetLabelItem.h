@class NSString;
@protocol GEOTransitArtworkDataSource;

@interface _GEOMapItemTransitInfoSnippetLabelItem : NSObject <GEOTransitLabelItem>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *labelString;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> labelArtwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 labelString:(id)a1 labelArtwork:(id)a2;

@end
