@class NSString, NSArray, NSData, NSDate;

@interface MKMessage : NSObject

@property (nonatomic) BOOL isSent;
@property (nonatomic) BOOL isRead;
@property (nonatomic) long long timestampInSeconds;
@property (nonatomic) long long timestampInNanoseconds;
@property (nonatomic) long long chatStyle;
@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) NSString *threadID;
@property (copy, nonatomic) NSString *sender;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSString *account;
@property (copy, nonatomic) NSString *UUID;
@property (retain, nonatomic) NSData *attributedBody;
@property (retain, nonatomic) NSArray *recipients;
@property (retain, nonatomic) NSArray *handles;
@property (retain, nonatomic) NSArray *attachments;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
