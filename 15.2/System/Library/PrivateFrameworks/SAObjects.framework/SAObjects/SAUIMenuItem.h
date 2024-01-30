@class NSArray, NSURL, NSString;

@interface SAUIMenuItem : SAAceView

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSURL *icon;
@property (copy, nonatomic) NSURL *ref;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;

+ (id)menuItem;
+ (id)menuItemWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
