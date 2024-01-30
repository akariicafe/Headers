@class NSString, CRRecentContactsLibrary;
@protocol CNUIDefaultUserActionRecorderEventFactory;

@interface CNUIDefaultUserActionRecorder : NSObject <CNUIUserActionRecorder>

@property (readonly, nonatomic) CRRecentContactsLibrary *library;
@property (readonly, nonatomic) id<CNUIDefaultUserActionRecorderEventFactory> eventFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
