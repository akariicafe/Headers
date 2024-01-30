@interface CVACLLocation : NSObject

@property (nonatomic) double timestamp;
@property (nonatomic) double timestampSince1970;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double altitude;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) double verticalAccuracy;
@property (nonatomic) double speed;
@property (nonatomic) double course;

- (id)initWithDictionary:(id)a0;
- (id)dictionary;
- (id)initWithCLLocation:(id)a0 timestamp:(double)a1;

@end
