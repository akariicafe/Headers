@interface ICASNoteEditContext : NSObject <AADataType>

@property (readonly, nonatomic) long long noteEditContext;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithNoteEditContext:(long long)a0;

@end
