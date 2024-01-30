@class NSData, NSString, NSArray, NSDate, NSAttributedString, DDScannerResult, NSURL, NSDictionary, IMBalloonPluginDataSource;

@interface IMPluginPayload : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *time;
@property (retain, nonatomic) NSArray *consumedSessionPayloads;
@property (retain, nonatomic) NSString *messageGUID;
@property (retain, nonatomic) NSString *associatedMessageGUID;
@property (retain, nonatomic) NSString *pluginSessionGUID;
@property (retain, nonatomic) NSString *pluginBundleID;
@property (retain, nonatomic) DDScannerResult *dataDetectedResult;
@property (retain, nonatomic) NSArray *attachments;
@property (weak, nonatomic) IMBalloonPluginDataSource *datasource;
@property (nonatomic) BOOL isFromMe;
@property (nonatomic) BOOL isPlayed;
@property (readonly, nonatomic) BOOL shouldHideAttachments;
@property (copy, nonatomic) NSString *sender;
@property (retain, nonatomic) NSAttributedString *text;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *breadcrumbText;
@property (retain, nonatomic) NSString *statusText;
@property (nonatomic, getter=isUpdate) BOOL update;
@property (nonatomic, getter=isSticker) BOOL sticker;
@property (nonatomic) BOOL shouldExpire;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) NSString *threadIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)payloadDictionary;
- (id)initWithMessageItem:(id)a0;
- (void)addAttachmentsFromFilePaths:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToPluginPayload:(id)a0;
- (id)initWithMessage:(id)a0;
- (id)initWithCoder:(id)a0 additionalAllowedClasses:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void)addAttachmentsFromFileTransferGUIDs:(id)a0;

@end
