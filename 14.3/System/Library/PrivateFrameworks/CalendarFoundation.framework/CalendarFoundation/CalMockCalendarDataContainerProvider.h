@class NSURL, NSString;

@interface CalMockCalendarDataContainerProvider : NSObject <CalCalendarDataContainerProvider>

@property (retain, nonatomic) NSURL *calendarDataContainerURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)containerForPersonaIdentifier:(id)a0;

@end
