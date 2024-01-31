@class NSString;

@interface CKTapToRadarRequest : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *radarDescription;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *componentName;
@property (retain, nonatomic) NSString *componentVersion;
@property (retain, nonatomic) NSString *componentID;
@property (retain, nonatomic) NSString *relatedRadar;

- (void).cxx_destruct;

@end
