@class NSURL, NSString;

@interface FCHLSKey : NSObject

@property (readonly, nonatomic) long long method;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *keyFormat;
@property (readonly, nonatomic) NSString *keyFormatVersions;
@property (readonly, nonatomic) NSString *iv;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)setPropertiesFromAttributeList:(id)a0;
- (BOOL)isFormatSupported;
- (BOOL)isEqualToHLSKey:(id)a0;

@end
