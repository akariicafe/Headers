@class NSSet, NSString, NSObject;
@protocol OS_dispatch_queue, CRContent;

@interface CRSCardRequest : CRSRequest <CRSCardRequesting> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic, getter=_excludedServiceIdentifiers, setter=_setExcludedServiceIdentifiers:) NSSet *excludedServiceIdentifiers;
@property (retain, nonatomic) id<CRContent> content;
@property (nonatomic) unsigned long long format;
@property (nonatomic) BOOL loadsBundleServices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)registerService:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)startWithReply:(id /* block */)a0;
- (id)initWithContent:(id)a0 format:(unsigned long long)a1;
- (void)_tryRemainingCardServices:(id)a0 reply:(id /* block */)a1;
- (void)_loadAndRegisterBundleServices:(id /* block */)a0;

@end
