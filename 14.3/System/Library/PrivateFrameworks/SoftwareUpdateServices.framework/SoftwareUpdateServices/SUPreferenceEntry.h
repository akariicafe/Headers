@class NSString;

@interface SUPreferenceEntry : NSObject

@property (readonly, retain, nonatomic) NSString *preferenceKey;
@property (readonly, nonatomic) long long type;
@property (readonly, retain, nonatomic) NSString *description;

- (id)initWithKey:(id)a0 type:(long long)a1 description:(id)a2;

@end
