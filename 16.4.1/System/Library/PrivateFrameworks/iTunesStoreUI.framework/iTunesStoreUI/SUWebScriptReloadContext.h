@class NSURL, NSString;

@interface SUWebScriptReloadContext : NSObject <NSCopying>

@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *referringUserAgent;
@property (retain, nonatomic) NSURL *referrerURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_copyScriptDictionaryRepresentation;

@end
