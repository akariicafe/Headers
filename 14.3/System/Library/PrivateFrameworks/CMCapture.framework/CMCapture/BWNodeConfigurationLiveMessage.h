@class BWFormat;

@interface BWNodeConfigurationLiveMessage : BWNodeMessage {
    long long _configurationID;
    BWFormat *_updatedFormat;
}

@property (readonly) long long configurationID;
@property (readonly) BWFormat *updatedFormat;

+ (id)newMessageWithConfigurationID:(long long)a0 updatedFormat:(id)a1;
+ (id)newMessageWithConfigurationID:(long long)a0;

- (void)dealloc;
- (id)_initWithConfigurationID:(long long)a0 updatedFormat:(id)a1;

@end
