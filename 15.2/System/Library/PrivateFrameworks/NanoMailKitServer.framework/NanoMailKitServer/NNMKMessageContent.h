@class NSString, NSData, NSArray;

@interface NNMKMessageContent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *messageId;
@property (retain, nonatomic) NSString *externalReferenceId;
@property (nonatomic) BOOL mainAlternativeValid;
@property (retain, nonatomic) NSData *textData;
@property (retain, nonatomic) NSData *htmlContentData;
@property (nonatomic) BOOL hasTextData;
@property (nonatomic) unsigned long long originalContentSize;
@property (retain, nonatomic) NSArray *attachments;
@property (nonatomic) BOOL partiallyLoaded;
@property (readonly, nonatomic) BOOL isHTML;

+ (id)classesForUnarchivingTextData;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
