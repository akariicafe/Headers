@interface AEGridConfiguration : NSObject

@property (nonatomic) unsigned long long rowCount;
@property (nonatomic) double tileHeight;
@property (nonatomic, getter=isOversized) BOOL oversized;

+ (id)configurationForEnvironment:(id)a0;

@end
