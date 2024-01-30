@class NSString;

@interface VUIProductBadgeResource : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isTemplated) BOOL templated;

- (void).cxx_destruct;
- (id)init;

@end
