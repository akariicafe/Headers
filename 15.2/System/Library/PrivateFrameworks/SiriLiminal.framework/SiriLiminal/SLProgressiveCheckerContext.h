@class NSDictionary, NSString;

@interface SLProgressiveCheckerContext : NSObject

@property (readonly, nonatomic) unsigned long long audioOption;
@property (readonly, nonatomic) NSDictionary *vtei;
@property (readonly, nonatomic) unsigned long long invocationType;
@property (readonly, nonatomic) NSString *locale;

- (id)initWithContext:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
