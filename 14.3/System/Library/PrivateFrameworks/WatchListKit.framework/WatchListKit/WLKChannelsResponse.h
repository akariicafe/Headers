@class NSArray, NSDictionary, NSDate;

@interface WLKChannelsResponse : NSObject

@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) BOOL filtered;
@property (nonatomic) unsigned long long environmentHash;
@property (retain, nonatomic) NSArray *orderedChannels;
@property (retain, nonatomic) NSDictionary *channels;

+ (id)parseChannelsFromPayload:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 expirationDate:(id)a1 environmentHash:(unsigned long long)a2 filtered:(BOOL)a3;
- (BOOL)isValidForFiltered:(BOOL)a0;

@end
