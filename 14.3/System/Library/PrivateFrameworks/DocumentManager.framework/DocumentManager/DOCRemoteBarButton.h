@class NSUUID, UIBarButtonItem;

@interface DOCRemoteBarButton : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) UIBarButtonItem *barButton;
@property (readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBarButton:(id)a0;

@end
