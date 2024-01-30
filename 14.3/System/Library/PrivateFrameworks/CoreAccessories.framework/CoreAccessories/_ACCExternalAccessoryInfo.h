@class NSDictionary, NSString;

@interface _ACCExternalAccessoryInfo : NSObject

@property (retain) NSDictionary *fullAccessoryInfo;
@property (retain) NSString *primaryUUID;
@property (retain) NSString *name;
@property (retain) NSString *manufacturer;
@property (retain) NSString *model;
@property (retain) NSString *serial;
@property (retain) NSString *firmwareRevisionActive;
@property (retain) NSString *firmwareRevisionPending;
@property (retain) NSString *hardwareRevision;
@property (retain) NSString *ppid;
@property unsigned long long destinationSharingOptions;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithAccessoryInfoDictionary:(id)a0;
- (id)copyAccessoryInfo;

@end
