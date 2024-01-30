@class NSString, NSDictionary;

@interface NTKFaceSupportUnlockAttemptEvent : NSObject <NTKFaceSupportAnalyticsRepresentable>

@property (readonly, nonatomic) double length;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, nonatomic) unsigned long long method;
@property (readonly, nonatomic) long long unlockErrorCode;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSDictionary *ntkfs_analyticsJSONRepresentation;
@property (readonly, nonatomic) NSString *ntkfs_analyticsEventName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLength:(double)a0 status:(unsigned long long)a1 method:(unsigned long long)a2 bundleIdentifier:(id)a3 unlockErrorCode:(long long)a4;

@end
