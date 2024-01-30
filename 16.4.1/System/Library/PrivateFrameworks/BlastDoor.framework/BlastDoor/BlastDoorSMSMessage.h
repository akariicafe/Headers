@class NSString, NSArray, NSDate;

@interface BlastDoorSMSMessage : NSObject {
    void /* unknown type, empty encoding */ sMSMessage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL has_spamCategory;
@property (nonatomic, readonly) long long spamCategory;
@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSArray *recipients;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *sender;
@property (nonatomic, readonly) BOOL has_iMessageCapability;
@property (nonatomic, readonly) long long iMessageCapability;
@property (nonatomic, readonly) NSString *serviceCenter;
@property (nonatomic, readonly) NSString *originatedDeviceNumber;
@property (nonatomic, readonly) NSString *originatedDeviceEmail;
@property (nonatomic, readonly) NSString *originatedDeviceSIM;
@property (nonatomic, readonly) NSString *subject;
@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic, readonly) BOOL has_replaceMessage;
@property (nonatomic, readonly) long long replaceMessage;
@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) NSString *GUID;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) BOOL has_trackMessage;
@property (nonatomic, readonly) BOOL trackMessage;
@property (nonatomic, readonly) BOOL has_sendEnabled;
@property (nonatomic, readonly) BOOL sendEnabled;

- (id)init;
- (void).cxx_destruct;

@end
