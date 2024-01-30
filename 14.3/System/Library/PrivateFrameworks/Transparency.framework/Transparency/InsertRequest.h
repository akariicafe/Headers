@class NSString, NSData;

@interface InsertRequest : GPBMessage

@property (nonatomic) int version;
@property (nonatomic) int application;
@property (nonatomic) unsigned long long appVersion;
@property (copy, nonatomic) NSString *requestUuid;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSData *deviceId;
@property (copy, nonatomic) NSData *clientData;
@property (copy, nonatomic) NSData *accountId;

+ (id)descriptor;

@end
