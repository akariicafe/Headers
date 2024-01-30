@class NSString, BBImage, BBAction, NSData;

@interface BBButton : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) BBImage *image;
@property (copy, nonatomic) BBAction *action;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSData *glyphData;

+ (id)buttonWithTitle:(id)a0 image:(id)a1 action:(id)a2 identifier:(id)a3;
+ (id)buttonWithTitle:(id)a0 action:(id)a1 identifier:(id)a2;
+ (id)buttonWithTitle:(id)a0 action:(id)a1;
+ (id)buttonWithTitle:(id)a0 glyphData:(id)a1 action:(id)a2 identifier:(id)a3;

- (id)awakeAfterUsingCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)replacementObjectForCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 image:(id)a1 action:(id)a2 identifier:(id)a3;

@end
