@class NSString, NSDictionary, NSURL, NSNumber;

@interface UNSAttachmentRecord : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) BOOL thumbnailHidden;
@property (copy, nonatomic) NSDictionary *thumbnailClippingRect;
@property (copy, nonatomic) NSNumber *thumbnailFrameNumber;
@property (copy, nonatomic) NSDictionary *thumbnailTimestamp;
@property (nonatomic) BOOL hiddenFromDefaultExpandedView;

- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
