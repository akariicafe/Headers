@class NSObject;
@protocol CRKClassKitChangeNotifierDelegate, CRKClassKitRosterRequirements;

@interface CRKClassKitChangeNotifier : NSObject

@property (readonly, nonatomic) NSObject<CRKClassKitRosterRequirements> *requirements;
@property (retain, nonatomic) id observerToken;
@property (weak, nonatomic) id<CRKClassKitChangeNotifierDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRequirements:(id)a0;
- (void)dataChanged;
- (void)stopObservingRequirements;
- (void)startObservingRequirements;

@end
