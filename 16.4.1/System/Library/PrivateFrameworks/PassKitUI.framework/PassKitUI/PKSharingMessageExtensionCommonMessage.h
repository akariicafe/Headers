@class NSString, NSData, UIImage, NSURL, PKProtobufCommonSharingMessage;

@interface PKSharingMessageExtensionCommonMessage : NSObject <PKSharingMessageExtensionMessage> {
    PKProtobufCommonSharingMessage *_message;
}

@property (retain, nonatomic) NSString *messageType;
@property (retain, nonatomic) NSData *messageData;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *topLeftTitle;
@property (retain, nonatomic) NSString *topRightTitle;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIImage *thumbnail;
@property (retain, nonatomic) NSData *rawThumbnailData;
@property (retain, nonatomic) NSURL *actionURL;
@property (retain, nonatomic) NSString *buttonTitle;
@property (nonatomic) BOOL isFromMe;
@property (nonatomic) BOOL isPending;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_messageDataWithDataURL:(id)a0 prefix:(id)a1;
+ (id)messageTypeFromURL:(id)a0;

- (id)initWithURL:(id)a0;
- (id)urlRepresentation;
- (id)init;
- (void).cxx_destruct;
- (id)_messageDataURLWithData:(id)a0 prefix:(id)a1;
- (id)_initWithCommonMessage:(id)a0 url:(id)a1;

@end
