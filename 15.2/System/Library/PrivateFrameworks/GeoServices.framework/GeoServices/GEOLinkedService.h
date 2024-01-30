@class NSTimeZone, NSArray, NSString, GEOPDLinkedService, GEOFeatureStyleAttributes;

@interface GEOLinkedService : NSObject {
    GEOPDLinkedService *_linkedService;
    NSArray *_cachedBusinessHours;
    BOOL _checkedForBusinessHoursAlready;
}

@property (retain, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) NSArray *businessHours;
@property (retain, nonatomic) NSString *localizedCategoryName;
@property (retain, nonatomic) GEOFeatureStyleAttributes *styleAttributes;

- (void).cxx_destruct;
- (id)initWithGEOPDLinkedService:(id)a0 timeZone:(id)a1;

@end
