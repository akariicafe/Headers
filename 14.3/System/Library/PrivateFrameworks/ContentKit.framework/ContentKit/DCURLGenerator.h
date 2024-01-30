@class NSString;

@interface DCURLGenerator : NSObject

@property (readonly, nonatomic) NSString *scheme;
@property (readonly, nonatomic) NSString *host;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *query;

- (id)URL;

@end
