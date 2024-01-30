@class NSURL, NSString;

@interface BLHLSKey : NSObject

@property (readonly, nonatomic) long long method;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *keyFormat;
@property (readonly, nonatomic) NSString *keyFormatVersions;
@property (readonly, nonatomic) NSString *iv;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)setPropertiesFromAttributeList:(id)a0;
- (BOOL)isFormatSupported;
- (BOOL)isEqualToHLSKey:(id)a0;

@end
