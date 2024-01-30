@class NSString;

@interface FCConfigHyperlinkTextLink : NSObject

@property (readonly, copy, nonatomic) NSString *url;
@property (readonly, nonatomic) long long rangeStart;
@property (readonly, nonatomic) long long rangeLength;

- (id)initWithConfigDictionary:(id)a0;
- (id)initWithURL:(id)a0 rangeStart:(long long)a1 rangeLength:(long long)a2;
- (void).cxx_destruct;

@end
