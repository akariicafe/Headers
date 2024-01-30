@class NSString, EDAMBootstrapSettings;

@interface EDAMBootstrapProfile : FATObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) EDAMBootstrapSettings *settings;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
