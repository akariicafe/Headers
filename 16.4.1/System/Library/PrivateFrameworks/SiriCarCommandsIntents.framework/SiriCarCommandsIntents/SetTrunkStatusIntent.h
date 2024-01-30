@class INSpeakableString;

@interface SetTrunkStatusIntent : INIntent

@property (nonatomic) long long trunkStatus;
@property (nonatomic, retain) INSpeakableString *carName;

- (id)initWithCoder:(id)a0;
- (id)init;

@end
