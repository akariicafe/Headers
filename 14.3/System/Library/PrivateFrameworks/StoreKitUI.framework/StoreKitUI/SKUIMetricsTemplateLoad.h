@class NSDictionary;

@interface SKUIMetricsTemplateLoad : NSObject <NSCopying>

@property (nonatomic) double requestStartTime;
@property (nonatomic) double responseStartTime;
@property (nonatomic) double responseEndTime;
@property (nonatomic) BOOL responseWasCached;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
