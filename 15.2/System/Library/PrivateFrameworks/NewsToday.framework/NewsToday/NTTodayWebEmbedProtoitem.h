@class NTPBTodaySectionConfigWebEmbed, NSString;

@interface NTTodayWebEmbedProtoitem : NSObject <NTTodayProtoitem>

@property (readonly, copy, nonatomic) NTPBTodaySectionConfigWebEmbed *webEmbed;
@property (readonly, copy, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)assetHandlesWithOperationInfo:(id)a0;
- (id)itemWithContentContext:(id)a0 operationInfo:(id)a1 sectionDescriptor:(id)a2 todayData:(id)a3 assetFileURLsByRemoteURL:(id)a4 preferredDynamicSlotAllocation:(unsigned long long)a5;
- (id)initWithIdentifier:(id)a0 webEmbed:(id)a1;

@end
