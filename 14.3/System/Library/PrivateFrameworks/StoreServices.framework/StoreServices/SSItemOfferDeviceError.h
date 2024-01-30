@class NSString, NSURL;

@interface SSItemOfferDeviceError : NSObject

@property (readonly, nonatomic) NSString *localizedMessage;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedURLTitle;
@property (readonly, nonatomic) NSURL *URL;

- (void)dealloc;
- (id)_initWithMessage:(id)a0 title:(id)a1 URLTitle:(id)a2 URL:(id)a3;

@end
