@class NSDictionary, NSString;

@interface FCNotificationDropboxData : NSObject <FCNotificationDropboxData>

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, copy, nonatomic) NSString *baseURLString;
@property (readonly, copy, nonatomic) NSString *notificationUserID;
@property (readonly, copy, nonatomic) NSString *deviceToken;
@property (readonly, copy, nonatomic) NSString *storefrontID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;

@end
