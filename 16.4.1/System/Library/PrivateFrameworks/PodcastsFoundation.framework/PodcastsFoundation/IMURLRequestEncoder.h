@class NSString;

@interface IMURLRequestEncoder : AMSURLRequestEncoder <IMRequestEncoding>

@property (nonatomic) BOOL personalizeRequests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
