@class NSString;

@interface CALNNullIconProvider : NSObject <CALNNotificationIconProvider, CALNCalendarIconIdentifierProvider, CalIconProvider>

@property (class, readonly, nonatomic) CALNNullIconProvider *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)identifierForIconWithDate:(id)a0 inCalendar:(id)a1;
- (id)pngDataForIconWithIdentifier:(id)a0;

@end
