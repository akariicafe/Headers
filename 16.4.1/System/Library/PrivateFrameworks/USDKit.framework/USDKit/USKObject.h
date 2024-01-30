@class USKToken, NSDictionary, USKObjectPath;

@interface USKObject : NSObject

@property (readonly, retain, nonatomic) USKToken *name;
@property (readonly, retain, nonatomic) USKObjectPath *path;
@property (readonly, nonatomic) NSDictionary *metadata;

- (void).cxx_destruct;

@end
