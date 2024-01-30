@class NSData, NSString, NSURL, BCMessageInfo, BCImageStore, BCMessageData, NSDictionary, NSAttributedString, UIImage;
@protocol BCDictionaryImageSerializable;

@interface BCMessage : NSObject

@property (nonatomic) BOOL isFromMe;
@property (retain, nonatomic) BCImageStore *imageStore;
@property (retain, nonatomic) BCMessageData *messageData;
@property (retain, nonatomic) BCMessageInfo *receivedMessage;
@property (retain, nonatomic) BCMessageInfo *replyMessage;
@property (retain, nonatomic) id<BCDictionaryImageSerializable> rootObject;
@property (retain, nonatomic) NSString *messageGUID;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *internalRootKey;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) Class rootModelObject;
@property (readonly, nonatomic) NSString *rootKey;
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
- (void)updateTitles;
- (id)encodedStringForDictionary:(id)a0;
- (BOOL)isVersionSupported;
- (BOOL)isAnyUnknownRootKey;
- (id)initWithData:(id)a0 url:(id)a1 messageGUID:(id)a2 isFromMe:(BOOL)a3;

@end
