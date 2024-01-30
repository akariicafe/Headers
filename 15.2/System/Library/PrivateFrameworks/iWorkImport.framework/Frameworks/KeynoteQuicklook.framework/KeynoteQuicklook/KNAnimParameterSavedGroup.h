@class NSString, NSMutableDictionary;

@interface KNAnimParameterSavedGroup : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *parameters;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *version;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)parameterForName:(id)a0;

@end
