@class NSArray, NSString;

@interface VSAppSettingsSection : NSObject

@property (copy, nonatomic) NSArray *viewModels;
@property (nonatomic) long long kind;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

+ (id)modifierForKind:(long long)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithViewModels:(id)a0 kind:(long long)a1;

@end
