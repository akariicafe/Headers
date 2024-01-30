@class NSString;

@interface SXWebCalActionActivityProvider : NSObject <SXActionActivityProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activityGroupForAction:(id)a0;

@end
