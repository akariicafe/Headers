@class NSString, NSURL;

@interface WLKServerRoute : NSObject

@property (readonly, copy, nonatomic) NSString *routeName;
@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *requiredKVPType;
@property (readonly, nonatomic) BOOL requiresLocation;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 routeName:(id)a1;

@end
