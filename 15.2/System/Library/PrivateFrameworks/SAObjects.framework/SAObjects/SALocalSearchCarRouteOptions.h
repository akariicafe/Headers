@class NSString;

@interface SALocalSearchCarRouteOptions : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL avoidHighways;
@property (nonatomic) BOOL avoidTolls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)carRouteOptions;
+ (id)carRouteOptionsWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
