@class SUDOMElement;

@interface SUOverlayTransition : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double duration;
@property (retain, nonatomic) SUDOMElement *sourceElement;
@property (nonatomic) long long type;

+ (long long)transitionTypeFromString:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
