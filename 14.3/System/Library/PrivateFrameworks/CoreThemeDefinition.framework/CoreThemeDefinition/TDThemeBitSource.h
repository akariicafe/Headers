@class NSString, NSSet;

@interface TDThemeBitSource : NSManagedObject

@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSSet *assets;

- (void)setName:(id)a0;
- (id)name;
- (id)fileURLWithDocument:(id)a0;

@end
