@class NSString, NSDate;

@interface SmartReplies.SRSmartRepliesMessage : NSObject <NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ senderIdentifier;
    void /* unknown type, empty encoding */ summary;
    void /* unknown type, empty encoding */ dateSent;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *senderIdentifier;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic) void /* unknown type, empty encoding */ isTapBack;
@property (nonatomic) void /* unknown type, empty encoding */ isEmote;
@property (nonatomic) void /* unknown type, empty encoding */ isRead;
@property (nonatomic, copy) NSDate *dateSent;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;

@end
