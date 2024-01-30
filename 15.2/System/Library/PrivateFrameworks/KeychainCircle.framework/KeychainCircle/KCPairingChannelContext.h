@class NSString;

@interface KCPairingChannelContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *model;
@property (retain) NSString *modelVersion;
@property (retain) NSString *modelClass;
@property (retain) NSString *osVersion;
@property (retain) NSString *uniqueDeviceID;
@property (retain) NSString *uniqueClientID;
@property (retain) NSString *intent;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
