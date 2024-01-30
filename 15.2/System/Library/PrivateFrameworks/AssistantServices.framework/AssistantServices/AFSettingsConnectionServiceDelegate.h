@class NSString, AFSettingsConnection;

@interface AFSettingsConnectionServiceDelegate : NSObject <AFSettingsServiceDelegate> {
    AFSettingsConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
