@class NSURL, NSString, ICSDocument;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVSetOfficeHoursTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate>

@property (retain, nonatomic) NSURL *inboxURL;
@property (retain, nonatomic) ICSDocument *calendarAvailability;
@property (nonatomic) id<CoreDAVTaskGroupDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
