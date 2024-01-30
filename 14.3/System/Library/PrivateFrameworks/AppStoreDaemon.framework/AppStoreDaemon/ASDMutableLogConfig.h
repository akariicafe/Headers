@class NSString;

@interface ASDMutableLogConfig : ASDLogConfig <NSCopying>

@property (copy, nonatomic) NSString *category;
@property (nonatomic) unsigned long long environment;
@property (copy, nonatomic) NSString *subsystem;

@end
