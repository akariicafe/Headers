@class BSProcessHandle, NSString;

@interface UISceneOpenURLOptions : NSObject

@property (readonly, nonatomic) BSProcessHandle *_sourceProcessHandle;
@property (readonly, nonatomic) BOOL _openAsDownload;
@property (readonly, nonatomic) NSString *sourceApplication;
@property (readonly, nonatomic) id annotation;
@property (readonly, nonatomic) BOOL openInPlace;

+ (id)_optionsFromDictionary:(id)a0;

- (void).cxx_destruct;
- (id)_initWithSourceApplication:(id)a0 processHandle:(id)a1 annotation:(id)a2 openInPlace:(BOOL)a3;
- (unsigned long long)hash;
- (id)_initWithSourceApplication:(id)a0 processHandle:(id)a1 annotation:(id)a2 openInPlace:(BOOL)a3 openAsDownload:(BOOL)a4;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
