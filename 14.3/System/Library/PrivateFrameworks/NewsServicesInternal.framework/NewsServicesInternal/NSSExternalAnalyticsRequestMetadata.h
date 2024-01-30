@class NSString, NTPBSession;

@interface NSSExternalAnalyticsRequestMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *eventIdentifier;
@property (readonly, copy, nonatomic) NSString *externalAnalyticsIdentifier;
@property (readonly, copy, nonatomic) NTPBSession *session;
@property (readonly, copy, nonatomic) NSString *contentViewedIdentifier;
@property (readonly, copy, nonatomic) NSString *publisherIdentifier;
@property (readonly, nonatomic) int eventType;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSession:(id)a0 eventIdentifier:(id)a1 externalAnalyticsIdentifier:(id)a2 contentViewedIdentifier:(id)a3 publisherIdentifier:(id)a4 eventType:(int)a5;

@end
