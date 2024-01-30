@class NSString, GEOPDAssociatedApp, NSArray;

@interface GEOAssociatedApp : NSObject

@property (retain, nonatomic) GEOPDAssociatedApp *geoAssociatedApp;
@property (readonly, nonatomic) BOOL hasPreferredAppAdamId;
@property (readonly, nonatomic) NSString *preferredAppAdamId;
@property (readonly, nonatomic) NSArray *alternateAppAdamIds;

- (id)initWithGEOPDAssociatedApp:(id)a0;
- (void).cxx_destruct;

@end
