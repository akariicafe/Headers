@class UIStoryboard;

@interface _UIStoryboardProxy : NSObject <NSSecureCoding> {
    UIStoryboard *_storyboard;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithStoryboard:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
