@class NSString;

@interface HMDRemoteMessageDestination : HMFMessageDestination <HMDRemoteAddressable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)allMessageDestinations;

- (id)remoteDestinationString;

@end
