@interface TVRUICaptionsButton : TVRUIButton

@property (nonatomic) BOOL captionsEnabled;

- (void)layoutSubviews;
- (id)description;
- (id)initWithCaptionsEnabled:(BOOL)a0;

@end
