@class NSString;

@interface SAWatchData : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL configuredForLeftWrist;
@property (copy, nonatomic) NSString *interfaceOrientation;
@property (nonatomic) BOOL victoryDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)watchData;
+ (id)watchDataWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
