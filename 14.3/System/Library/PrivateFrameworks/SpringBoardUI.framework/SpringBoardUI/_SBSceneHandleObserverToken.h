@class NSString, NSMutableDictionary;

@interface _SBSceneHandleObserverToken : NSObject <SBSceneHandleObserverToken>

@property (readonly, weak, nonatomic) NSMutableDictionary *owner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOwner:(id)a0;

@end
