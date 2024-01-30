@class NSMutableSet, VOSScreenreaderMode;

@interface _VOSProfileMode : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) VOSScreenreaderMode *mode;
@property (retain, nonatomic) NSMutableSet *commands;

+ (id)profileModeWitMode:(id)a0;
+ (id)profileModeWithStringValue:(id)a0;

- (void).cxx_destruct;
- (void)addCommand:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithMode:(id)a0 commands:(id)a1;

@end
