@class NSArray;

@interface SAUIUpdateViews : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *views;

+ (id)updateViews;
+ (id)updateViewsWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
