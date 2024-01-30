@class NSString, NSArray, NSDictionary, NSDate, NSNumber;

@interface SAFetchActivityStream : SABaseClientBoundCommand <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *activityType;
@property (nonatomic) BOOL ascending;
@property (copy, nonatomic) NSDate *fromDate;
@property (copy, nonatomic) NSNumber *limit;
@property (copy, nonatomic) NSArray *matchingMetadataKeys;
@property (copy, nonatomic) NSDictionary *matchingMetadataKeysAndStringValues;
@property (copy, nonatomic) NSString *sortBy;
@property (copy, nonatomic) NSArray *streamTypes;
@property (copy, nonatomic) NSString *taskType;
@property (copy, nonatomic) NSDate *toDate;
@property (copy, nonatomic) NSString *visibility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchActivityStream;
+ (id)fetchActivityStreamWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
