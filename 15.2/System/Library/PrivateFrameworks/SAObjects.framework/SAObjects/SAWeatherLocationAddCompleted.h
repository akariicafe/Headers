@class NSString, NSURL;

@interface SAWeatherLocationAddCompleted : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *error;
@property (copy, nonatomic) NSURL *weatherLocationId;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)locationAddCompleted;
+ (id)locationAddCompletedWithDictionary:(id)a0 context:(id)a1;
+ (id)locationAddCompletedWithError:(id)a0;
+ (id)locationAddCompletedWithWeatherLocationId:(id)a0;

- (id)encodedClassName;
- (id)initWithError:(id)a0;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)initWithWeatherLocationId:(id)a0;

@end
