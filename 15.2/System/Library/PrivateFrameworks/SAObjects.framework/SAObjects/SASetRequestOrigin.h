@class NSNumber, NSString;

@interface SASetRequestOrigin : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double verticalAccuracy;
@property (nonatomic) double horizontalAccuracy;
@property (copy, nonatomic) NSNumber *age;
@property (nonatomic) double altitude;
@property (copy, nonatomic) NSString *desiredAccuracy;
@property (nonatomic) double direction;
@property (copy, nonatomic) NSNumber *preciseLocationEnabled;
@property (nonatomic) double speed;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)setRequestOrigin;
+ (id)setRequestOriginWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
