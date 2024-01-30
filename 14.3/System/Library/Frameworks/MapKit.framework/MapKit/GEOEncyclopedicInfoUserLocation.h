@class GEOMapItemAttribution, NSString, NSArray, MKMapItem;

@interface GEOEncyclopedicInfoUserLocation : NSObject <GEOEncyclopedicInfo> {
    BOOL _isUserLocation;
}

@property (retain, nonatomic) MKMapItem *mapItem;
@property (readonly, nonatomic) BOOL hasTextBlock;
@property (readonly, nonatomic) NSString *textBlockTitle;
@property (readonly, nonatomic) NSString *textBlockText;
@property (readonly, nonatomic) BOOL hasPairOfFactoids;
@property (readonly, nonatomic) NSArray *factoids;
@property (readonly, nonatomic) BOOL hasStandAloneFactoids;
@property (readonly, nonatomic) GEOMapItemAttribution *encyclopedicAttribution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMapItem:(id)a0 isUserLocation:(BOOL)a1;
- (void).cxx_destruct;

@end
