@class NSString, NSDate;

@interface WLKChannelResponse : NSObject

@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) unsigned long long environmentHash;
@property (retain, nonatomic) NSString *channelTitle;
@property (retain, nonatomic) NSString *channelLink;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 expirationDate:(id)a1 environmentHash:(unsigned long long)a2;

@end
