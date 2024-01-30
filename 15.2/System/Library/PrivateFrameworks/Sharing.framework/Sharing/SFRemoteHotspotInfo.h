@class NSString, NSNumber;

@interface SFRemoteHotspotInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *name;
@property (copy) NSString *password;
@property (retain) NSNumber *channel;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 password:(id)a1 channel:(id)a2;

@end
