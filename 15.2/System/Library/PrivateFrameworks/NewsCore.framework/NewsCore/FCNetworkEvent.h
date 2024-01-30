@class NSString, NSDictionary, NSURL, NSError;

@interface FCNetworkEvent : NSObject <NSCopying>

@property (nonatomic) int type;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *requestUUID;
@property (copy, nonatomic) NSString *operationID;
@property (nonatomic) double startTime;
@property (copy, nonatomic) NSDictionary *w3cNavigationTiming;
@property (nonatomic) unsigned long long requestSize;
@property (nonatomic) unsigned long long responseSize;
@property (copy, nonatomic) NSString *responseMIMEType;
@property (nonatomic) unsigned long long HTTPStatusCode;
@property (copy, nonatomic) NSString *HTTPMethod;
@property (copy, nonatomic) NSDictionary *HTTPResponseHeaders;
@property (copy, nonatomic) NSString *containerName;
@property (copy, nonatomic) NSError *error;
@property (readonly, nonatomic) double totalDuration;
@property (readonly, nonatomic) double fetchStartTime;
@property (readonly, nonatomic) double dnsDuration;
@property (readonly, nonatomic) double connectDuration;
@property (readonly, nonatomic) double requestDuration;
@property (readonly, nonatomic) double responseDuration;
@property (readonly, nonatomic) double responseEndTime;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;

@end
