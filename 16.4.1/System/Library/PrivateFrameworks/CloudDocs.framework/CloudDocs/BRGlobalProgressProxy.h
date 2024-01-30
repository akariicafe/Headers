@class NSString;

@interface BRGlobalProgressProxy : BRProgressProxy <BRProgressProxyDelegate> {
    NSString *_kind;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
