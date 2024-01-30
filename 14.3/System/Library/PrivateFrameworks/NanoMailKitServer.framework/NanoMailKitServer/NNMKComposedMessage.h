@class NSString, NSArray;

@interface NNMKComposedMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *composedMessageId;
@property (nonatomic) unsigned long long sendingType;
@property (retain, nonatomic) NSArray *to;
@property (retain, nonatomic) NSArray *cc;
@property (retain, nonatomic) NSString *subject;
@property (retain, nonatomic) NSString *body;
@property (retain, nonatomic) NSString *referenceMessageId;
@property (retain, nonatomic) NSString *standaloneReferenceMessageId;
@property (retain, nonatomic) NSString *accountId;
@property (nonatomic) BOOL includeAttachments;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithNewId;

@end
