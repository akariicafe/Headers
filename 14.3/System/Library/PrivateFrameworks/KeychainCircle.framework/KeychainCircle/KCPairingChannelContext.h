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

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
