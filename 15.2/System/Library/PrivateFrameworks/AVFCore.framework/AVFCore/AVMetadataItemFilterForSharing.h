@interface AVMetadataItemFilterForSharing : AVMetadataItemFilter

+ (void)addKeySpace:(id)a0 key:(id)a1 toWhitelistDictionary:(id)a2;
+ (void)addIdentifier:(id)a0 toWhitelistDictionary:(id)a1;

- (id)whitelist;

@end
