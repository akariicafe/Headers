@class NSString, NSDate;

@interface SARemoveFromActivityStream : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *activityType;
@property (copy, nonatomic) NSDate *fromDate;
@property (copy, nonatomic) NSString *streamType;
@property (copy, nonatomic) NSString *taskType;
@property (copy, nonatomic) NSDate *toDate;
@property (copy, nonatomic) NSString *visibility;

+ (id)removeFromActivityStream;
+ (id)removeFromActivityStreamWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
