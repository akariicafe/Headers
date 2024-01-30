@class NSString, NSData;

@interface BatchUpdateRequest_UpdateData : GPBMessage

@property (nonatomic) int type;
@property (nonatomic) int application;
@property (nonatomic) unsigned long long appVersion;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSData *clientData;
@property (nonatomic) BOOL accountMismatch;
@property (nonatomic) unsigned long long expiryMs;
@property (copy, nonatomic) NSData *accountKey;

+ (id)descriptor;

@end
