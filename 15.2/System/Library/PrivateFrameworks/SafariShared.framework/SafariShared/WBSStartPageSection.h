@class NSString;

@interface WBSStartPageSection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)sectionWithEnabled:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 enabled:(BOOL)a1;

@end
