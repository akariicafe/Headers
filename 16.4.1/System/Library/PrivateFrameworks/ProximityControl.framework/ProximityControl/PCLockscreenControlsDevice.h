@class NSNumber, NSString;

@interface PCLockscreenControlsDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *distance;
@property (retain, nonatomic) NSString *mediaRouteID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMediaRouteID:(id)a0 distance:(id)a1;

@end
