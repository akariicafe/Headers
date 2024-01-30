@class NSString, NSURL;

@interface BLHLSMedia : NSObject

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *name;

- (void).cxx_destruct;
- (id)description;
- (void)setPropertiesFromAttributeList:(id)a0;

@end
