@class NSString;

@interface TPSAnalyticsEventContentLinkTapped : TPSAnalyticsEvent

@property (readonly, nonatomic) NSString *contentID;
@property (readonly, nonatomic) NSString *collectionID;
@property (readonly, nonatomic) NSString *correlationID;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *context;
@property (retain, nonatomic) NSString *displayType;
@property (readonly, nonatomic) NSString *url;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithContentID:(id)a0 collectionID:(id)a1 correlationID:(id)a2 url:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;
- (id)_initWithContentID:(id)a0 collectionID:(id)a1 correlationID:(id)a2 url:(id)a3 bundleID:(id)a4 context:(id)a5 displayType:(id)a6;

@end
