@class BSProcessHandle, NSString, UIEventAttribution;
@protocol NSObject;

@interface UISceneOpenURLOptions : NSObject

@property (readonly, nonatomic) BSProcessHandle *_sourceProcessHandle;
@property (readonly, nonatomic) BOOL _openAsDownload;
@property (readonly, nonatomic) NSString *sourceApplication;
@property (readonly, nonatomic) id<NSObject> annotation;
@property (readonly, nonatomic) BOOL openInPlace;
@property (readonly, nonatomic) UIEventAttribution *eventAttribution;

+ (id)_optionsFromPayload:(id)a0 sourceProcessHandle:(id)a1;
+ (id)_optionsFromDictionary:(id)a0;

- (id)_initWithSourceApplication:(id)a0 processHandle:(id)a1 annotation:(id)a2 openInPlace:(BOOL)a3 eventAttribution:(id)a4 openAsDownload:(BOOL)a5;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)_initWithSourceApplication:(id)a0 processHandle:(id)a1 annotation:(id)a2 openInPlace:(BOOL)a3;
- (id)description;
- (void).cxx_destruct;

@end
