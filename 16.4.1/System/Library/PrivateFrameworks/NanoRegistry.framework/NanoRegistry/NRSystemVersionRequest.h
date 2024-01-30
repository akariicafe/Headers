@class NSString;

@interface NRSystemVersionRequest : NSObject <NRSystemVersionRequest>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendVersionRequestToCompanion;

@end
