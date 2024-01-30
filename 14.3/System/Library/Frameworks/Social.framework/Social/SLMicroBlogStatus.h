@class NSString, NSArray;

@interface SLMicroBlogStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *statusText;
@property (retain, nonatomic) NSArray *imageData;
@property (retain, nonatomic) NSArray *imageAssetURLs;
@property (retain, nonatomic) NSString *maskedApplicationID;
@property (retain, nonatomic) NSString *inReplyToStatusID;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)loadAssetDataIfNecessaryWithMaxByteSize:(unsigned long long)a0 completion:(id /* block */)a1;

@end
