@class NSURL, NSString;

@interface SUWebScriptReloadContext : NSObject <NSCopying>

@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *referringUserAgent;
@property (retain, nonatomic) NSURL *referrerURL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_copyScriptDictionaryRepresentation;

@end
