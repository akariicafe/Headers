@class NSString, NSData;

@interface MarkForDeletionRequest : GPBMessage

@property (nonatomic) int version;
@property (nonatomic) int application;
@property (nonatomic) unsigned long long appVersion;
@property (copy, nonatomic) NSString *requestUuid;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSData *accountId;
@property (copy, nonatomic) NSData *deviceId;
@property (copy, nonatomic) NSData *clientData;

+ (id)descriptor;

@end
