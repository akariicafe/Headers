@class NSArray;

@interface SATTSGetUnspeakableRangeOfTextCompleted : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *results;

+ (id)getUnspeakableRangeOfTextCompleted;
+ (id)getUnspeakableRangeOfTextCompletedWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
