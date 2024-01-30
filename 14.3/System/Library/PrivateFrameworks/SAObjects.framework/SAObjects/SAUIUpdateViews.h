@class NSArray;

@interface SAUIUpdateViews : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *views;

+ (id)updateViewsWithDictionary:(id)a0 context:(id)a1;
+ (id)updateViews;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
