@class NSURL, NSString, NSDate;

@interface TSArticleContext : NSObject {
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ sourceApplication;
    void /* unknown type, empty encoding */ previousArticleID;
    void /* unknown type, empty encoding */ previousArticleVersion;
    void /* unknown type, empty encoding */ adPreviewSessionID;
    void /* unknown type, empty encoding */ adPreviewID;
    void /* unknown type, empty encoding */ adQToken;
    void /* unknown type, empty encoding */ userActionDate;
    void /* unknown type, empty encoding */ notificationID;
    void /* unknown type, empty encoding */ notificationSenderChannelID;
}

@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *sourceApplication;
@property (nonatomic, readonly) NSString *previousArticleID;
@property (nonatomic, readonly) NSString *previousArticleVersion;
@property (nonatomic, readonly) NSString *adPreviewSessionID;
@property (nonatomic, readonly) NSString *adPreviewID;
@property (nonatomic, readonly) NSString *adQToken;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ maximumAdRequestsForCurrentAdPreviewID;
@property (nonatomic, readonly) NSDate *userActionDate;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ presentationReason;
@property (nonatomic, readonly) NSString *notificationID;
@property (nonatomic, readonly) NSString *notificationSenderChannelID;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ shouldAutoPlayVideo;
@property (nonatomic, retain) void /* unknown type, empty encoding */ referral;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUrl:(id)a0 title:(id)a1 sourceApplication:(id)a2 previousArticleID:(id)a3 previousArticleVersion:(id)a4 adPreviewSessionID:(id)a5 adPreviewID:(id)a6 adQToken:(id)a7 maximumAdRequestsForCurrentAdPreviewID:(long long)a8 userActionDate:(id)a9 presentationReason:(long long)a10 notificationID:(id)a11 notificationSenderChannelID:(id)a12 referral:(id)a13 shouldAutoPlayVideo:(BOOL)a14;

@end
