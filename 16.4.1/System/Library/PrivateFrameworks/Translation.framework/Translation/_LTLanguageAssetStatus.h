@class NSString, NSArray, MAProgressNotification;

@interface _LTLanguageAssetStatus : NSObject

@property (nonatomic) BOOL finished;
@property (nonatomic) long long progress;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSArray *localIdentifiers;
@property (retain, nonatomic) MAProgressNotification *update;

- (id)description;
- (void).cxx_destruct;
- (id)_LTAssetStateString;

@end
