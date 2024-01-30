@class NSURL, NSDictionary, NSString;

@interface ATAParsedOpenURL : NSObject

@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSDictionary *options;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *tabBarItemIdentifier;

+ (id)_logStringForType:(unsigned long long)a0;
+ (id)parsedOpenURLWithURL:(id)a0 andOptions:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithURL:(id)a0 options:(id)a1 type:(unsigned long long)a2;

@end
