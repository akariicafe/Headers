@class NSString, NSMutableDictionary;

@interface MOXPCContext : NSObject <NSSecureCoding> {
    NSMutableDictionary *_configuration;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *xpcProcessName;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)encodeDictionary:(id)a0;
- (id)decodeToDictionary:(id)a0;

@end
