@class NSNumber, NSArray, NSString;

@interface SSVMediaSocialPostDescription : NSObject <NSCopying, SSXPCCoding>

@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (copy, nonatomic) NSArray *attachments;
@property (nonatomic, getter=isAttributed) BOOL attributed;
@property (copy, nonatomic) NSString *authorIdentifier;
@property (copy, nonatomic) NSString *authorType;
@property (copy, nonatomic) NSArray *contentItems;
@property (copy, nonatomic) NSArray *externalServiceDestinations;
@property (copy, nonatomic) NSString *sourceApplicationIdentifier;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
