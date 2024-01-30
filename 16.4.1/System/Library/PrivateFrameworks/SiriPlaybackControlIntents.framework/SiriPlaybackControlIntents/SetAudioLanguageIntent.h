@class LanguageOption, NSArray, Device;

@interface SetAudioLanguageIntent : INIntent

@property (nonatomic, retain) Device *device;
@property (nonatomic, retain) LanguageOption *language;
@property (nonatomic, copy) NSArray *deviceContext;
@property (nonatomic, copy) NSArray *deviceQueries;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;

@end
