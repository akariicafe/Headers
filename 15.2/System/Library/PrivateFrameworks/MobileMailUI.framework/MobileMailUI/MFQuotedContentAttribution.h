@class NSString;

@interface MFQuotedContentAttribution : NSObject

@property (class, readonly) MFQuotedContentAttribution *unknownAttribution;
@property (class, readonly) MFQuotedContentAttribution *noAttribution;

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *senderName;

+ (id)attributionWithSenderName:(id)a0;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithType:(long long)a0 senderName:(id)a1;

@end
