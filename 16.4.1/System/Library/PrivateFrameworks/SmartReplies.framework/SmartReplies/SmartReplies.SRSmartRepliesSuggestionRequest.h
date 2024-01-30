@class NSArray, NSString, NSDate;

@interface SmartReplies.SRSmartRepliesSuggestionRequest : NSObject <NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ receivedMessages;
    void /* unknown type, empty encoding */ senderMessages;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ languageCode;
    void /* unknown type, empty encoding */ languageLastChangedDate;
    void /* unknown type, empty encoding */ requestDate;
    void /* unknown type, empty encoding */ recipients;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic) void /* unknown type, empty encoding */ type;
@property (nonatomic, copy) NSArray *receivedMessages;
@property (nonatomic, copy) NSArray *senderMessages;
@property (nonatomic, copy) NSString *context;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic, copy) NSDate *languageLastChangedDate;
@property (nonatomic) void /* unknown type, empty encoding */ includesDynamicSuggestions;
@property (nonatomic, copy) NSDate *requestDate;
@property (nonatomic, copy) NSArray *recipients;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)concatenatedReceivedText;
- (id)initWithType:(long long)a0 receivedMessages:(id)a1;
- (id)receivedMessagesAsStrings;
- (id)senderMessagesAsStrings;

@end
