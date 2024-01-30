@class NSArray, NSString, MSMessage, UIImage, PKProtobufShareableCredentialMessage;

@interface PKShareableCredentialMessage : NSObject {
    PKProtobufShareableCredentialMessage *_protoMessage;
}

@property (readonly, nonatomic) MSMessage *underlyingMessage;
@property (copy, nonatomic) NSArray *shareableCredentials;
@property (copy, nonatomic) NSString *dataString;
@property (copy, nonatomic) NSString *caption;
@property (copy, nonatomic) NSString *policyIdentifier;
@property (copy, nonatomic) UIImage *passThumbnailImage;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithUnderlyingMessage:(id)a0;
- (void)_updateDataURL;
- (void)_updateLayoutContents;
- (id)_shareableCredentialMessageDataWithDataURL:(id)a0;
- (id)_shareableCredentialMessageDataURLWithData:(id)a0;

@end
