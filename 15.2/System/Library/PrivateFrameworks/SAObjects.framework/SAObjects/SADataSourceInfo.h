@class NSString;

@interface SADataSourceInfo : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *contextIdentifier;
@property (copy, nonatomic) NSString *proximityHint;
@property (copy, nonatomic) NSString *sourceDeviceOwnership;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)encodedClassName;
- (id)groupIdentifier;

@end
