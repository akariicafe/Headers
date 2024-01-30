@interface CalLocationAuthorizationStatus : NSObject

@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) unsigned long long precision;

- (id)initWithStatus:(int)a0 precision:(unsigned long long)a1;

@end
