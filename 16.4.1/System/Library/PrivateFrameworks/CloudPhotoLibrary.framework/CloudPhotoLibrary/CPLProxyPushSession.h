@class NSString;

@interface CPLProxyPushSession : CPLProxySession <CPLPushChangeSessionImplementation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)beginSessionForProxy:(id)a0 knownVersion:(id)a1 context:(id)a2 completionHandler:(id /* block */)a3;

- (void)commitChangeBatch:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
