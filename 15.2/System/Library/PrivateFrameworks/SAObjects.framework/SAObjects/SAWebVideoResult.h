@class NSNumber;

@interface SAWebVideoResult : SAWebImageResult

@property (copy, nonatomic) NSNumber *runTimeInMilliseconds;

+ (id)videoResult;
+ (id)videoResultWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
