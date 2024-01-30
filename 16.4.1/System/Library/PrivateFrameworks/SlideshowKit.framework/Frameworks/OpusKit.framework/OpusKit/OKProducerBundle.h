@class NSString, NSBundle, NSURL, NSDictionary;

@interface OKProducerBundle : NSObject {
    NSURL *_url;
    NSBundle *_bundle;
    NSDictionary *_infoDictionary;
}

@property (retain, nonatomic) NSString *bundleExtension;
@property (readonly, nonatomic) unsigned long long type;

- (double)version;
- (id)bundle;
- (id)url;
- (id)identifier;
- (id)infoDictionary;
- (void)dealloc;
- (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2;
- (id)init;
- (id)URLForResource:(id)a0 withExtension:(id)a1;
- (id)initWithURL:(id)a0 bundleType:(unsigned long long)a1;

@end
