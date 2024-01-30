@class NSString;

@interface WRCannedReply : NSObject

@property (retain, nonatomic) NSString *defaultReplyText;
@property (retain, nonatomic) NSString *defaultReplyKey;
@property (copy, nonatomic) NSString *text;

- (void).cxx_destruct;

@end
