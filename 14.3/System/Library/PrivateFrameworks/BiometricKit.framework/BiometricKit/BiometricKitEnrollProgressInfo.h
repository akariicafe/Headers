@class NSDictionary;

@interface BiometricKitEnrollProgressInfo : NSObject

@property (nonatomic) long long progress;
@property (nonatomic) long long currentPrimaryComponentID;
@property (retain, nonatomic) NSDictionary *captureImage;
@property (retain, nonatomic) NSDictionary *renderedImage;
@property (nonatomic) int message;
@property (retain, nonatomic) NSDictionary *messageDetails;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
