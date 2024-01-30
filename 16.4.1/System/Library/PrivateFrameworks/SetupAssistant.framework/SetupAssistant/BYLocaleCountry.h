@class NSString;

@interface BYLocaleCountry : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *code;

+ (id /* block */)comparatorForLocale:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
