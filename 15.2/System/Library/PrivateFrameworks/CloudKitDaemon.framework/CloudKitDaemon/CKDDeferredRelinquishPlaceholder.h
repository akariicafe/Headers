@class NSString;

@interface CKDDeferredRelinquishPlaceholder : NSObject <CKDZoneGatekeeperWaiter>

@property (readonly, nonatomic) long long qualityOfService;
@property (readonly, nonatomic) NSString *underlyingCKShortDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
