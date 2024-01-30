@class NSString, GEOPDMessageLink, NSTimeZone;

@interface GEOMessageLink : NSObject {
    GEOPDMessageLink *_messageLink;
}

@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) NSString *messageID;
@property (readonly, nonatomic) NSString *messageURLString;
@property (readonly, nonatomic) BOOL isVerified;
@property (readonly, nonatomic) NSString *navBackgroundColorString;
@property (readonly, nonatomic) NSString *navTintColorString;

- (void).cxx_destruct;
- (id)messageBusinessHours;
- (id)initWithMessageLink:(id)a0;
- (int)responseTime;

@end
