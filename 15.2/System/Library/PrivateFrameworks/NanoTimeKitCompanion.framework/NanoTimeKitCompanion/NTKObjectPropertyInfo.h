@class NSString;

@interface NTKObjectPropertyInfo : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL isDynamic;
@property (copy, nonatomic) NSString *typeString;

- (void).cxx_destruct;

@end
