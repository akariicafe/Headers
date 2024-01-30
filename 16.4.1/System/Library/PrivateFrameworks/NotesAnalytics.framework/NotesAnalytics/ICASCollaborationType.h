@interface ICASCollaborationType : NSObject <AADataType>

@property (readonly, nonatomic) long long collaborationType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithCollaborationType:(long long)a0;

@end
