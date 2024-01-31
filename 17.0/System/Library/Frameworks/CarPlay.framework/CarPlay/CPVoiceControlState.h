@class NSArray, UIImage, NSString;

@interface CPVoiceControlState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *titleVariants;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL repeats;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 titleVariants:(id)a1 image:(id)a2 repeats:(BOOL)a3;

@end
