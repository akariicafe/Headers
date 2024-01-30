@class NSArray, NSURL;

@interface KmlCarOemConfigManager : NSObject

@property (retain, nonatomic) NSArray *uwbDenyList;
@property (retain, nonatomic) NSArray *nfcDenyList;
@property (retain, nonatomic) NSURL *configFilePath;

- (id)init;
- (void).cxx_destruct;
- (void)parseConfig;

@end
