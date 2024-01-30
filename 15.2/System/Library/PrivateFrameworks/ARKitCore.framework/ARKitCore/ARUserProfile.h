@class NSString;

@interface ARUserProfile : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long type;

+ (id)defaultProfile;

- (id)description;
- (id)initWithIdentifier:(id)a0 type:(long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
