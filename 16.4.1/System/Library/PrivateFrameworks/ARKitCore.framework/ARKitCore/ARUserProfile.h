@class NSString;

@interface ARUserProfile : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long type;

+ (id)defaultProfile;

- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 type:(long long)a1;
- (id)description;
- (void).cxx_destruct;

@end
