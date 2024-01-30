@class NSString, NSDictionary, NSData;

@interface SFWatchListItem : NSObject <SFWatchListItem, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *watchListIdentifier;
@property (copy, nonatomic) NSString *seasonEpisodeTextFormat;
@property (copy, nonatomic) NSString *continueInTextFormat;
@property (copy, nonatomic) NSString *openButtonTitle;
@property (copy, nonatomic) NSString *installButtonTitle;
@property (copy, nonatomic) NSString *purchaseOfferTextFormat;
@property (copy, nonatomic) NSString *inUpNextText;
@property (copy, nonatomic) NSString *addToUpNextText;
@property (copy, nonatomic) NSString *addedToUpNextText;
@property (copy, nonatomic) NSString *watchLiveTextFormat;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
