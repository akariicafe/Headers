@class NSString, AMSBagKeySet, NSNumber, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface ASDMediaClipTask : AMSTask <AMSBagConsumer> {
    id<AMSBagProtocol> _bag;
    NSString *_clientID;
    NSString *_logKey;
    unsigned long long _signpostID;
}

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (retain, nonatomic) NSNumber *externalVersionID;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

@end
