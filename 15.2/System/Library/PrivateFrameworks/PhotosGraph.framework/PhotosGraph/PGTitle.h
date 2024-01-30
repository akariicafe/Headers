@class NSString;

@interface PGTitle : NSObject

@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) long long category;

+ (id)titleWithString:(id)a0 category:(long long)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
