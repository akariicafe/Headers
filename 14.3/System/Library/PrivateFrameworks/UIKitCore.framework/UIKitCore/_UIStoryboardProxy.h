@class UIStoryboard;

@interface _UIStoryboardProxy : NSObject <NSSecureCoding> {
    UIStoryboard *_storyboard;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithStoryboard:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
