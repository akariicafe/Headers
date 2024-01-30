@class NSNumber, NSString;

@interface SAUserTokenStatus : AceObject <SABackgroundContextObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSNumber *lastUpdateAttemptTime;
@property (copy, nonatomic) NSNumber *shouldExcludeFromBackgroundRefresh;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)encodedClassName;
- (id)groupIdentifier;

@end
