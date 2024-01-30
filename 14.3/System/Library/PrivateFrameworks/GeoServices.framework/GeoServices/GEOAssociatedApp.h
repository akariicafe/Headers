@class NSString, GEOPDAssociatedApp, NSArray;

@interface GEOAssociatedApp : NSObject

@property (retain, nonatomic) GEOPDAssociatedApp *geoAssociatedApp;
@property (readonly, nonatomic) BOOL hasPreferredAppAdamId;
@property (readonly, nonatomic) NSString *preferredAppAdamId;
@property (readonly, nonatomic) NSArray *alternateAppAdamIds;

- (void).cxx_destruct;
- (id)initWithGEOPDAssociatedApp:(id)a0;

@end
