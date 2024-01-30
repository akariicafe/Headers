@class NSUUID, NSError, NSDate;

@interface MNRealtimeUpdate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *routeID;
@property (readonly, nonatomic) NSDate *lastUpdated;
@property (readonly, nonatomic) NSError *error;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
