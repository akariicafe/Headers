@class NSString, NSObject;
@protocol OS_os_log;

@interface MSSiriIntelligenceSettings : NSObject <EFLoggable>

@property (class, readonly) BOOL canShowSiriSuggestions;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_initializeSettings;
+ (void)setCanShowSiriSuggestions:(BOOL)a0;


@end
