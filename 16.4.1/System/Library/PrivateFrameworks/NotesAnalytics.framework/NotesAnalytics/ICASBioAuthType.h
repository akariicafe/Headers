@interface ICASBioAuthType : NSObject <AADataType>

@property (readonly, nonatomic) long long bioAuthType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithBioAuthType:(long long)a0;

@end
