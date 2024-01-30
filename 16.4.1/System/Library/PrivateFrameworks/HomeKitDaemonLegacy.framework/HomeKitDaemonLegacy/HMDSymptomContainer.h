@class NSString, NSSet;
@protocol HMDAccessorySymptomsDelegate;

@interface HMDSymptomContainer : NSObject

@property (readonly, copy, nonatomic) NSString *idsIdentifier;
@property (weak, nonatomic) id<HMDAccessorySymptomsDelegate> delegate;
@property (copy, nonatomic) NSSet *symptoms;

- (void).cxx_destruct;
- (id)initWithIDSIdentifier:(id)a0;

@end
