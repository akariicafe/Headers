@class GEOPDTip, NSString;

@interface GEOMapItemTip : NSObject

@property (retain, nonatomic) GEOPDTip *geoTip;
@property (readonly, nonatomic) BOOL hasTipTime;
@property (readonly, nonatomic) double tipTime;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *localizedSnippet;
@property (readonly, nonatomic) NSString *bestImageURL;
@property (readonly, nonatomic) BOOL hasTipId;
@property (readonly, nonatomic) NSString *tipId;

- (id)initWithGEOPDTip:(id)a0;
- (void).cxx_destruct;

@end
