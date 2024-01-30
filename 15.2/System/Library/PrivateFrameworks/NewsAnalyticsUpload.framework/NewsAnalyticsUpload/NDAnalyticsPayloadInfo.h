@class NSURL, NSDictionary, NSArray;

@interface NDAnalyticsPayloadInfo : NSObject <NDAnalyticsPayloadInfo>

@property (copy, nonatomic) NSURL *endpointURL;
@property (copy, nonatomic) NSDictionary *valuesByHTTPHeaderField;
@property (copy, nonatomic) NSArray *entriesToUpload;
@property (copy, nonatomic) NSDictionary *droppedEntriesByReason;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
