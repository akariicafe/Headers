@class NSString;

@interface BYLocaleCountry : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *code;

+ (id /* block */)comparatorForLocale:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
