@class NSString;

@interface DeviceModelCoderContainer : NSObject <HomePodSettings.DeviceModelMessaging> {
    void /* unknown type, empty encoding */ groupID;
    void /* unknown type, empty encoding */ groupName;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ pairID;
    void /* unknown type, empty encoding */ pairName;
    void /* unknown type, empty encoding */ roomID;
    void /* unknown type, empty encoding */ roomName;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *groupID;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *pairID;
@property (nonatomic, copy) NSString *pairName;
@property (nonatomic, copy) NSString *roomID;
@property (nonatomic, copy) NSString *roomName;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
