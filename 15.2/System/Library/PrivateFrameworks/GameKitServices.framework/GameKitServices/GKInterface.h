@class NSNumber, NSString;

@interface GKInterface : NSObject

@property (retain, nonatomic) NSNumber *index;
@property (copy, nonatomic) NSString *bsdName;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) unsigned int priority;

+ (id)bsdNameForIndex:(id)a0;
+ (id)interfaceWithInterfaceIndex:(id)a0;

- (id)description;
- (void)dealloc;

@end
