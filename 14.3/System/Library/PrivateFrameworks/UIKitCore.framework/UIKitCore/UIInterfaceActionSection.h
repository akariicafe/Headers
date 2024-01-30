@class NSArray, NSString;

@interface UIInterfaceActionSection : NSObject <NSCopying>

@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) NSString *sectionID;

+ (id)actionsFromSections:(id)a0;

- (void).cxx_destruct;
- (id)copyOfActions;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithActions:(id)a0;

@end
