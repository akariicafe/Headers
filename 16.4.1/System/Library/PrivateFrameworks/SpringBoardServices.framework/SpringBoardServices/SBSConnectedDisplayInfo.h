@class NSString, SBSRelativeDisplayArrangement, SBSDisplayModeSettings;

@interface SBSConnectedDisplayInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic, getter=isMirrored) BOOL mirrored;
@property (readonly, nonatomic) SBSRelativeDisplayArrangement *arrangement;
@property (readonly, nonatomic) unsigned long long supportedScales;
@property (readonly, nonatomic) SBSDisplayModeSettings *displayModeSettings;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 size:(struct CGSize { double x0; double x1; })a2 mirrored:(BOOL)a3 supportedScales:(unsigned long long)a4 displayModeSettings:(id)a5 arrangement:(id)a6;

@end
