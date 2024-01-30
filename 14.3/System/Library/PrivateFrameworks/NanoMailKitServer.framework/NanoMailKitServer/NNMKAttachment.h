@class NSString;

@interface NNMKAttachment : NSTextAttachment <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *contentId;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *mimePartNumber;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *messageId;
@property (nonatomic) unsigned long long syncState;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
