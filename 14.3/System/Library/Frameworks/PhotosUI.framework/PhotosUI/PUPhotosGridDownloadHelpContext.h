@class PHResourceLocalAvailabilityRequest, NSString;

@interface PUPhotosGridDownloadHelpContext : NSObject

@property (retain, nonatomic) PHResourceLocalAvailabilityRequest *resourceLocalAvailabilityRequest;
@property (retain, nonatomic) NSString *gridProgressIdentifier;
@property (copy, nonatomic) id /* block */ downloadHandler;

- (void).cxx_destruct;

@end
