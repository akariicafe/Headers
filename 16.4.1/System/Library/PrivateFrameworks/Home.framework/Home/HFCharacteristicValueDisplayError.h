@class NSError, HMSymptom;
@protocol HFCharacteristicOperationContextProviding;

@interface HFCharacteristicValueDisplayError : NSObject

@property (nonatomic) unsigned long long category;
@property (retain, nonatomic) id<HFCharacteristicOperationContextProviding> contextProvider;
@property (copy, nonatomic) NSError *underlyingError;
@property (retain, nonatomic) HMSymptom *underlyingSymptom;
@property (readonly, nonatomic, getter=isPersistentError) BOOL persistentError;

+ (id)errorWithUnderlyingError:(id)a0 readTraits:(id)a1 contextProvider:(id)a2;
+ (id)errorWithUnderlyingSymptom:(id)a0 isFixingCurrently:(BOOL)a1 contextProvider:(id)a2;
+ (id)mostEgregiousError:(id)a0;

- (id)description;
- (void).cxx_destruct;

@end
