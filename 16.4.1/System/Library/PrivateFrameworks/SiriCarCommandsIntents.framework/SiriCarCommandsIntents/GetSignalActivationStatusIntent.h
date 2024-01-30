@class INSpeakableString, NSNumber;

@interface GetSignalActivationStatusIntent : INIntent

@property (nonatomic, retain) INSpeakableString *carName;
@property (nonatomic, retain) NSNumber *carSignal;

- (id)initWithCoder:(id)a0;
- (id)init;

@end
