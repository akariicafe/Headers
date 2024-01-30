@class NSArray, LNDeferredLocalizedString;

@interface LNDynamicOptionsSection : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNDeferredLocalizedString *title;
@property (readonly, nonatomic) NSArray *options;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0 title:(id)a1;

@end
