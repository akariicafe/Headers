@class INSpeakableString;

@interface GetTrunkStatusIntent : INIntent

@property (nonatomic, retain) INSpeakableString *carName;

- (id)initWithCoder:(id)a0;
- (id)init;

@end
