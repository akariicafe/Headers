@class NSData, NSString, NSURL, BCMessageInfo, BCImageStore, BCMessageData, NSDictionary, NSAttributedString, UIImage;
@protocol BCDictionarySerializable;

@interface BCMessage : NSObject {
    BOOL _isFromMe;
    long long _version;
    NSString *_requestIdentifier;
    NSString *_messageGUID;
    id<BCDictionarySerializable> _rootObject;
    BCImageStore *_imageStore;
    BCMessageData *_messageData;
    BCMessageInfo *_receivedMessage;
    BCMessageInfo *_replyMessage;
    NSString *_internalRootKey;
}

@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) BOOL isVersionSupported;
@property (readonly, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) NSString *messageGUID;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) id<BCDictionarySerializable> rootObject;
@property (readonly, nonatomic) NSString *rootKey;
@property (readonly, nonatomic) BCImageStore *imageStore;
@property (readonly, nonatomic) BCMessageData *messageData;
@property (readonly, nonatomic) BCMessageInfo *receivedMessage;
@property (readonly, nonatomic) BCMessageInfo *replyMessage;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSAttributedString *subtitle;
@property (retain, nonatomic) NSString *summaryText;
@property (retain, nonatomic) NSString *subcaption;
@property (retain, nonatomic) NSString *accessibilityLabel;
@property (readonly, nonatomic) UIImage *image;

+ (id)defaultBubbleTitleFor:(id)a0;

- (void).cxx_destruct;
- (id)initFromOriginalMessage:(id)a0 rootKey:(id)a1 rootObject:(id)a2 receivedMessage:(id)a3 replyMessage:(id)a4;
- (id)initWithData:(id)a0 url:(id)a1 isFromMe:(BOOL)a2;
- (id)initWithData:(id)a0 url:(id)a1 messageGUID:(id)a2 isFromMe:(BOOL)a3;
- (id)makeRootObjectWithMessageData:(id)a0 dictionary:(id)a1 imageDictionary:(id)a2 version:(long long)a3;

@end
