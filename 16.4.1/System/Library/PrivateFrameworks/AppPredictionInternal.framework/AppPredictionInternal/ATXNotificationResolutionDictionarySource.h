@class NSString, NSDictionary;

@interface ATXNotificationResolutionDictionarySource : NSObject <ATXNotificationResolutionSourceProtocol> {
    NSDictionary *_resolutionDictionary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resolutionsForNotifications:(id)a0;
- (void).cxx_destruct;
- (id)initWithResolutionDictionary:(id)a0;

@end
