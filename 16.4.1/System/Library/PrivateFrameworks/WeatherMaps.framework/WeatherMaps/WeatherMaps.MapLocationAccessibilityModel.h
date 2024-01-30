@class NSString, NSDate;

@interface WeatherMaps.MapLocationAccessibilityModel : NSObject {
    void /* unknown type, empty encoding */ accessibilityDescription;
    void /* unknown type, empty encoding */ overlayDescriptionKey;
    void /* unknown type, empty encoding */ expiration;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ location;
@property (nonatomic, readonly) NSString *accessibilityDescription;
@property (nonatomic, readonly) NSString *overlayDescriptionKey;
@property (nonatomic, readonly) NSDate *expiration;

- (id)init;
- (void).cxx_destruct;

@end
