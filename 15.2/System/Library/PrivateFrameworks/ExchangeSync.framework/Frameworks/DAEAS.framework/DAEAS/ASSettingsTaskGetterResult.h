@interface ASSettingsTaskGetterResult : NSObject

@property (nonatomic) int key;
@property (nonatomic) long long status;
@property (retain, nonatomic) id result;

- (void).cxx_destruct;
- (id)initWithKey:(int)a0 status:(long long)a1 result:(id)a2;

@end
