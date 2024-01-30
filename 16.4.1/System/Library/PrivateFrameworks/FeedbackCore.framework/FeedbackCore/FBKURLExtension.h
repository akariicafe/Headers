@class NSString, NSDictionary;

@interface FBKURLExtension : NSObject

@property (retain, nonatomic) NSString *extensionIdentifier;
@property (retain, nonatomic) NSDictionary *parameters;
@property (retain, nonatomic) NSString *name;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithExtensionIdentifier:(id)a0 parameters:(id)a1;

@end
