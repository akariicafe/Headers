@class NSString;

@interface CalCalendarLocalAccountInfo : NSObject <CDBAccountInfo>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)addressIsAccountOwner:(id)a0;

@end
