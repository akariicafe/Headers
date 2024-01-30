@class NSString, NSSet;
@protocol HMDAccessorySymptomsDelegate;

@interface HMDSymptomContainer : NSObject

@property (readonly, copy, nonatomic) NSString *idsIdentifier;
@property (weak, nonatomic) id<HMDAccessorySymptomsDelegate> delegate;
@property (copy, nonatomic) NSSet *broadcastedSymptoms;
@property (copy, nonatomic) NSSet *localSymptoms;

- (void).cxx_destruct;
- (id)initWithIDSIdentifier:(id)a0;

@end
