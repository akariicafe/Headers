@class GEOMapItemChildActionSearch;

@interface GEOMapItemChildAction : NSObject

@property (nonatomic) long long childActionType;
@property (retain, nonatomic) GEOMapItemChildActionSearch *childActionSearch;

- (id)initWithChildAction:(id)a0;
- (void).cxx_destruct;

@end
