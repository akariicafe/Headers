@class NSString, NSDictionary, NSURL, NSData, NSNumber;

@interface IMRecentItem : NSObject

@property (retain, nonatomic) NSNumber *timestamp;
@property (copy, nonatomic) NSString *GUID;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSData *payloadData;
@property (retain, nonatomic) NSDictionary *messageItemInfo;
@property (retain, nonatomic) NSString *accessibilityString;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)asJSONObject;
- (id)initWithGUID:(id)a0 data:(id)a1 messageItemInfo:(id)a2;

@end
