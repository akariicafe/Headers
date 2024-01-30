@class NSString;

@interface PGTitle : NSObject

@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) long long category;

+ (id)titleWithString:(id)a0 category:(long long)a1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
