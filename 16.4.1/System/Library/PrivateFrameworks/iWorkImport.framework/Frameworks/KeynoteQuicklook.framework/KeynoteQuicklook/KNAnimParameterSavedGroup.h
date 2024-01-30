@class NSString, NSMutableDictionary;

@interface KNAnimParameterSavedGroup : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *parameters;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *version;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)parameterForName:(id)a0;

@end
