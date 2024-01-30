@class NSNumber;

@interface ASCOverlaySettings : NSObject

@property (class, readonly) ASCOverlaySettings *sharedSettings;

@property (copy, nonatomic) NSNumber *rateLimitRequestsPerSecond;
@property (copy, nonatomic) NSNumber *rateLimitTimeWindow;
@property (copy, nonatomic) NSNumber *overlaysLoadTimeout;

- (id)_init;

@end
