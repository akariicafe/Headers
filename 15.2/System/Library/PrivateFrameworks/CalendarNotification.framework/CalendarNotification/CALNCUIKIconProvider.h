@class NSString;

@interface CALNCUIKIconProvider : NSObject <CALNNotificationIconProvider, CALNCalendarIconIdentifierProvider, CalIconProvider>

@property (class, readonly, nonatomic) CALNCUIKIconProvider *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_parseIconIdentifier:(id)a0 intoDateComponents:(id *)a1 calendar:(id *)a2 type:(long long *)a3;
+ (id)_identifierEncodingAllowedCharacters;

- (id)identifierForIconWithDate:(id)a0 inCalendar:(id)a1;
- (id)pngDataForIconWithIdentifier:(id)a0;

@end
