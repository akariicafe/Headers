@class NSSet, NSDictionary;

@interface EDAMLazyMap : FATObject

@property (retain, nonatomic) NSSet *keysOnly;
@property (retain, nonatomic) NSDictionary *fullMap;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
