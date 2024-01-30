@class NSString, NSArray;

@interface WFContactGroup : NSObject <WFNaming>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *contacts;
@property (readonly, copy, nonatomic) NSString *wfName;

+ (Class)preferredConcreteSubclass;
+ (id)allContactGroups;
+ (id)contactGroupWithName:(id)a0;

- (BOOL)containsContact:(id)a0;

@end
