@class NSString, NSMutableDictionary;

@interface _SBSceneHandleObserverToken : NSObject <SBSceneHandleObserverToken>

@property (readonly, weak, nonatomic) NSMutableDictionary *owner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOwner:(id)a0;
- (void).cxx_destruct;

@end
