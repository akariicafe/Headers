@class NSString, NSArray, MAProgressNotification, NSError, VSVoiceAsset;

@interface _LTLanguageAssetStatus : NSObject

@property (nonatomic) long long progress;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) VSVoiceAsset *voiceAsset;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSArray *localIdentifiers;
@property (retain, nonatomic) MAProgressNotification *update;

- (void).cxx_destruct;
- (id)_LTAssetStateString;
- (id)description;

@end
