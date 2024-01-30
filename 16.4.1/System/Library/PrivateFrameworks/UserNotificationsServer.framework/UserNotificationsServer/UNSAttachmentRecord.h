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

- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
