@class NSString;

@interface HKAxisLabel : NSObject

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) id location;
@property (nonatomic) long long labelType;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
