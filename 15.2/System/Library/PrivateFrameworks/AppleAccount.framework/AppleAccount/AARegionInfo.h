@class NSString, NSDictionary;

@interface AARegionInfo : NSObject <NSCopying> {
    NSDictionary *_regionInfoDictionary;
}

@property (readonly, nonatomic) NSString *displayedHostname;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;

@end
