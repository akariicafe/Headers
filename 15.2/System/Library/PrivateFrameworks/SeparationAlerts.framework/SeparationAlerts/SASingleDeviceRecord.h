@class NSUUID, SADevice, TASPAdvertisement, NSDate, NSMutableArray;

@interface SASingleDeviceRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) SADevice *device;
@property (nonatomic) unsigned long long withYouStatus;
@property (nonatomic) long long connectionState;
@property (nonatomic) unsigned long long notificationState;
@property (readonly, nonatomic) TASPAdvertisement *latestAdvertisement;
@property (readonly, nonatomic) NSDate *lastWithYouDate;
@property (retain, nonatomic) NSMutableArray *uuidsOfRelatedDevices;
@property (nonatomic) BOOL hasSurfacedNotification;
@property (readonly) BOOL isConnected;

- (id)initWithDevice:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)updateLatestAdvertisement:(id)a0;
- (id)initWithConnectionEvent:(id)a0;
- (void)updateLastWithYouDate:(id)a0;
- (void)updateWithYouStatus:(unsigned long long)a0;
- (void)resetRelatedDevices;
- (void)insertRelatedDevice:(id)a0;

@end
