@class NSArray;

@interface COHomeKitSettingsResponse : COMeshResponse

@property (readonly, copy, nonatomic) NSArray *settings;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithAccessorySettings:(id)a0;

@end
