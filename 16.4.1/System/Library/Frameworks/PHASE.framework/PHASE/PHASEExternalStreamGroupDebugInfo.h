@class NSDictionary;

@interface PHASEExternalStreamGroupDebugInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isControlled) BOOL controlled;
@property (readonly, nonatomic, getter=isControllerPaused) BOOL controllerPaused;
@property (readonly, copy, nonatomic) NSDictionary *streams;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)setStreams:(id)a0;
- (void)setControlled:(BOOL)a0;
- (void)setControllerPaused:(BOOL)a0;

@end
