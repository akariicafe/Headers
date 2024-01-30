@class NSString, NSObject;
@protocol OS_os_log;

@interface EMMessageSnippetHintZoneBuilder : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)authorHintsFromHintsBySnippetZone:(id)a0;
+ (id)snippetHintZoneFromString:(id)a0;


@end
