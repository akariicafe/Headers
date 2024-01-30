@class NSURL, NSString, BKSHIDEventAuthenticationMessage;

@interface UISClickAttribution : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned char sourceIdentifier;
@property (readonly, copy, nonatomic) NSURL *destinationURL;
@property (readonly, copy, nonatomic) NSURL *reportEndpoint;
@property (readonly, copy, nonatomic) NSString *sourceDescription;
@property (readonly, copy, nonatomic) NSString *purchaser;
@property (readonly, copy, nonatomic) BKSHIDEventAuthenticationMessage *eventMessage;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithSourceIdentifier:(unsigned char)a0 destinationURL:(id)a1 reportEndpoint:(id)a2 sourceDescription:(id)a3 purchaser:(id)a4 eventMessage:(id)a5;
- (id)clickAttributionWithReportEndpoint:(id)a0;

@end
