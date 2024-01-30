@class GEOMapItemAttribution, NSString, NSArray, GEOPDPlace, NSMapTable;

@interface _GEOEncyclopedicInfo : NSObject <GEOEncyclopedicInfo> {
    GEOPDPlace *_placeData;
    NSMapTable *_attributionMap;
}

@property (readonly, nonatomic) BOOL hasTextBlock;
@property (readonly, nonatomic) NSString *textBlockTitle;
@property (readonly, nonatomic) NSString *textBlockText;
@property (readonly, nonatomic) BOOL hasPairOfFactoids;
@property (readonly, nonatomic) NSArray *factoids;
@property (readonly, nonatomic) NSArray *placeSummaryFactoids;
@property (readonly, nonatomic) BOOL hasStandAloneFactoids;
@property (readonly, nonatomic) GEOMapItemAttribution *encyclopedicAttribution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
