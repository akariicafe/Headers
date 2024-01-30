@class NSMutableSet, VOSScreenreaderMode;

@interface _VOSProfileMode : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) VOSScreenreaderMode *mode;
@property (retain, nonatomic) NSMutableSet *commands;

+ (id)profileModeWithStringValue:(id)a0;
+ (id)profileModeWitMode:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithMode:(id)a0 commands:(id)a1;
- (void)addCommand:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
