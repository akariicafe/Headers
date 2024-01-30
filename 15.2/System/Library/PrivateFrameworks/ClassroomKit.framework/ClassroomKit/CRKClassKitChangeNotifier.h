@class NSSet, NSObject;
@protocol CRKClassKitChangeNotifierDelegate, CRKClassKitRosterRequirements;

@interface CRKClassKitChangeNotifier : NSObject

@property (readonly, nonatomic) NSObject<CRKClassKitRosterRequirements> *requirements;
@property (retain, nonatomic) id generalObserverToken;
@property (retain, nonatomic) id trustedPersonObserverToken;
@property (copy, nonatomic) NSSet *observedTrustedPersonIDs;
@property (weak, nonatomic) id<CRKClassKitChangeNotifierDelegate> delegate;

- (void)dataChanged;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRequirements:(id)a0;
- (BOOL)updateObservedTrustedPersonIDsWithRoster:(id)a0;
- (void)stopObservingGeneralChanges;
- (void)stopObservingTrustedPersons;
- (void)startObservingGeneralChanges;
- (id)trustedPersonIDsInRoster:(id)a0;
- (id /* block */)makeObserverBlock;

@end
