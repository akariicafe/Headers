@class NSString, NSNumber;

@interface SAPerformDataDetectionMatch : SABaseCommand <SAServerBoundCommand, SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *dataDetectionType;
@property (copy, nonatomic) NSNumber *length;
@property (copy, nonatomic) NSNumber *location;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)performDataDetectionMatch;
+ (id)performDataDetectionMatchWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
