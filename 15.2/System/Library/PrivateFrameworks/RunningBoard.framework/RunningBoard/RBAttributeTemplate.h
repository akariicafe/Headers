@class NSString, RBSAttribute;

@interface RBAttributeTemplate : NSObject

@property (retain, nonatomic) NSString *className;
@property (retain, nonatomic) RBSAttribute *attribute;

- (id)description;
- (void).cxx_destruct;

@end
