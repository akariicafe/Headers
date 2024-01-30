@class NSString, NSURL;

@interface TPSAssetsInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ videoIdentifier;
    void /* unknown type, empty encoding */ videoURL;
    void /* unknown type, empty encoding */ imageIdentifier;
    void /* unknown type, empty encoding */ imageURL;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSString *videoIdentifier;
@property (nonatomic, copy) NSURL *videoURL;
@property (nonatomic, copy) NSString *imageIdentifier;
@property (nonatomic, copy) NSURL *imageURL;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithVideoIdentifier:(id)a0 videoURL:(id)a1 imageIdentifier:(id)a2 imageURL:(id)a3;

@end
