@class NSString;

@interface KMFieldValue : NSObject

@property (readonly, nonatomic) long long fieldType;
@property (readonly, nonatomic) NSString *value;

- (void).cxx_destruct;
- (id)initWithFieldType:(long long)a0 value:(id)a1;

@end
