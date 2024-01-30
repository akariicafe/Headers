@class _DUIPreview, _DUIImageComponent;

@interface _DUIPreviewAndImageComponent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _DUIPreview *preview;
@property (retain, nonatomic) _DUIImageComponent *imageComponent;
@property (nonatomic) unsigned long long index;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
