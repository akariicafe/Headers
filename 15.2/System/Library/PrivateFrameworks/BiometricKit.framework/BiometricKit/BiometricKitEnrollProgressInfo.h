@class NSDictionary;

@interface BiometricKitEnrollProgressInfo : NSObject

@property (nonatomic) long long progress;
@property (nonatomic) long long currentPrimaryComponentID;
@property (retain, nonatomic) NSDictionary *captureImage;
@property (retain, nonatomic) NSDictionary *renderedImage;
@property (nonatomic) int message;
@property (retain, nonatomic) NSDictionary *messageDetails;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
