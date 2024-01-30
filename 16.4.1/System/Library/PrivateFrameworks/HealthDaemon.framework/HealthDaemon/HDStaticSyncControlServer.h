@class NSString;

@interface HDStaticSyncControlServer : HDStandardTaskServer <HKStaticSyncControlServer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

@end
