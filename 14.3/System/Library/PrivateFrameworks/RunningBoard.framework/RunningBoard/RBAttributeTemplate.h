@class NSString, RBSAttribute;

@interface RBAttributeTemplate : NSObject

@property (retain, nonatomic) NSString *className;
@property (retain, nonatomic) RBSAttribute *attribute;

- (void).cxx_destruct;
- (id)description;

@end
