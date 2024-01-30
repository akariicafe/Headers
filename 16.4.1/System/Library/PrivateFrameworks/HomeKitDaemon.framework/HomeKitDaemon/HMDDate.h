@class NSString;

@interface HMDDate : NSObject <HMDDateProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)timeIntervalSince1970;

@end
