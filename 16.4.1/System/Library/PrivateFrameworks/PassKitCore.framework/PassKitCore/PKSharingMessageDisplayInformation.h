@class NSString, NSURL;

@interface PKSharingMessageDisplayInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) NSURL *openGraphURL;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 imageURL:(id)a2;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 imageURL:(id)a2 openGraphURL:(id)a3;

@end
