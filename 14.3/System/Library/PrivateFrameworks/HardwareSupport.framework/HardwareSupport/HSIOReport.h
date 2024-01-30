@class NSDictionary, NSArray;

@interface HSIOReport : NSObject <NSCopying>

@property (retain, nonatomic) NSDictionary *reportDictionary;
@property (retain, nonatomic) NSArray *channelDescriptions;

+ (id)report:(id *)a0;
+ (id)reportWithOnlySimpleChannels:(id *)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (id)snapshot:(id *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithReportDictionary:(id)a0;
- (BOOL)isEqualToReport:(id)a0;
- (id)reportByFilteringChannels:(id /* block */)a0;
- (id)reportWithOnlySimpleChannels;

@end
