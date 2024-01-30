@interface SALocalSearchSetNavigationVoiceMuted : SADomainCommand

@property (nonatomic) BOOL voiceMuted;

+ (id)setNavigationVoiceMuted;
+ (id)setNavigationVoiceMutedWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
