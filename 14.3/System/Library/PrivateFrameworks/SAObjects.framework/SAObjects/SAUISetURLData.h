@class NSArray;

@interface SAUISetURLData : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *urlData;

+ (id)setURLData;
+ (id)setURLDataWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
