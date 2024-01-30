@class NSString, EFObservable;

@interface _MFSatisfiedActivityCondition : NSObject <MFActivityCondition>

@property (readonly, nonatomic, getter=isSatisfied) BOOL satisfied;
@property (readonly, nonatomic) EFObservable *conditionsObservable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
