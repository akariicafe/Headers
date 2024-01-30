@class NSNumber, NSString;

@interface SATextDecorationRegion : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *length;
@property (copy, nonatomic) NSString *property;
@property (copy, nonatomic) NSNumber *start;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textDecorationRegion;
+ (id)textDecorationRegionWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
