@class NSString;

@interface CKDTapToRadarRequest : NSObject

@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *componentName;
@property (retain, nonatomic) NSString *componentVersion;
@property (retain, nonatomic) NSString *componentID;
@property (retain, nonatomic) NSString *relatedRadar;

- (void).cxx_destruct;

@end
