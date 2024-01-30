@class NSTimeZone, NSString, NSMapTable, GEOBusinessHours, GEORatingSummary, GEOPDDataItem;
@protocol GEOFactoid;

@interface GEOPlaceLineTemplate : NSObject {
    GEOPDDataItem *_dataItem;
    NSTimeZone *_timeZone;
    NSMapTable *_attributionMap;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSString *categoryName;
@property (readonly, nonatomic) GEOBusinessHours *businessHours;
@property (readonly, nonatomic) NSString *locationName;
@property (readonly, nonatomic) GEORatingSummary *ratingSummary;
@property (readonly, nonatomic) id<GEOFactoid> factoid;

+ (BOOL)isDataItemValid:(id)a0;

- (id)initWithDataItem:(id)a0 timeZone:(id)a1 attributionMap:(id)a2;
- (void).cxx_destruct;

@end
