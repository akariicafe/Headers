@class NSMutableDictionary;

@interface SBSSystemNotesSnapshot : NSObject <NSSecureCoding> {
    NSMutableDictionary *_imageDataByInterfaceStyle;
    NSMutableDictionary *_imageFormatByInterfaceStyle;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)succinctDescription;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)imageDataForStyle:(long long)a0;
- (void)setImageData:(id)a0 format:(long long)a1 style:(long long)a2;
- (long long)imageFormatForStyle:(long long)a0;

@end
