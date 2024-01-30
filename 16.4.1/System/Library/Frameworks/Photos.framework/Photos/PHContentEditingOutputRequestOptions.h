@interface PHContentEditingOutputRequestOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isAsyncAdjustment) BOOL asyncAdjustment;
@property (nonatomic, getter=isOnlyChangingOriginalChoice) BOOL onlyChangingOriginalChoice;
@property (nonatomic) long long playbackStyle;
@property (nonatomic) BOOL preferHEICForRenderedImages;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;

@end
