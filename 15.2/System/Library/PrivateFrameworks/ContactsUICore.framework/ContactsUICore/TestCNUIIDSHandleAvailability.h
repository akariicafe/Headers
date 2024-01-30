@class NSString;
@protocol CNUIIDSHandle;

@interface TestCNUIIDSHandleAvailability : NSObject <CNUIIDSHandleAvailability>

@property (retain, nonatomic) id<CNUIIDSHandle> handle;
@property (nonatomic) BOOL available;
@property (readonly, nonatomic) BOOL isAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
