@interface WAViewType : NSObject <AADataType>

@property (readonly, nonatomic) long long viewType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithViewType:(long long)a0;

@end
