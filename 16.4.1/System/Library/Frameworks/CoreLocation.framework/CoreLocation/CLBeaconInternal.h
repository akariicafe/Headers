@class NSUUID, NSNumber;

@interface CLBeaconInternal : NSObject {
    NSUUID *proximityUUID;
    NSNumber *major;
    NSNumber *minor;
    long long proximity;
    double accuracy;
    long long rssi;
    double timestamp;
}

@end
