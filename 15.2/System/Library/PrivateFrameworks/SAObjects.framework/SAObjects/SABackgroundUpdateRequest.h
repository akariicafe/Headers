@protocol SAAceSerializable;

@interface SABackgroundUpdateRequest : SAStartRequest

@property (retain, nonatomic) id<SAAceSerializable> attachment;

+ (id)backgroundUpdateRequest;
+ (id)backgroundUpdateRequestWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
