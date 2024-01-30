@class NSString;
@protocol SAAceSerializable;

@interface SAAceResult : SABaseAceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<SAAceSerializable> result;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aceResultWithDictionary:(id)a0 context:(id)a1;
+ (id)aceResult;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
