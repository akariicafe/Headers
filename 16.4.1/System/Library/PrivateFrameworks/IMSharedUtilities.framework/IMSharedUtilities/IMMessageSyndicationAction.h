@class IMMessagePartGUID;

@interface IMMessageSyndicationAction : IMSyndicationAction

@property (readonly, nonatomic) long long messagePartSyndicationType;
@property (readonly, nonatomic) long long messagePartSyndicationStatus;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } messagePartRange;
@property (readonly, copy, nonatomic) IMMessagePartGUID *messagePartGUID;
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyDictionaryRepresentation;
- (id)initWithChatGUID:(id)a0 syndicationStartDate:(id)a1 syndicationActionType:(unsigned char)a2 encodedMessagePartGUID:(id)a3 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (id)initWithChatGUID:(id)a0 syndicationStartDate:(id)a1 syndicationActionType:(unsigned char)a2 encodedMessagePartGUID:(id)a3 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 version:(unsigned char)a5;
- (id)initWithChatGUID:(id)a0 syndicationStartDate:(id)a1 syndicationActionType:(unsigned char)a2 messagePartGUID:(id)a3 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (id)initWithChatGUID:(id)a0 syndicationStartDate:(id)a1 syndicationActionType:(unsigned char)a2 messagePartGUID:(id)a3 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 version:(unsigned char)a5;
- (unsigned char)syndicatedItemType;

@end
