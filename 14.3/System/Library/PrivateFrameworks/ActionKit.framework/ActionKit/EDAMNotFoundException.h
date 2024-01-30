@class NSString;

@interface EDAMNotFoundException : FATException

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *key;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
