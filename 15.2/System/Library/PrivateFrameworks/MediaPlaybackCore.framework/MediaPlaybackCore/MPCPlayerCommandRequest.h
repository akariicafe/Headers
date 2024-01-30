@class NSString, NSDictionary, MPCPlayerPath, MPCMediaRemoteController;

@interface MPCPlayerCommandRequest : NSObject

@property (readonly, copy, nonatomic) NSString *originalLabel;
@property (readonly, nonatomic) unsigned int command;
@property (readonly, copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) NSDictionary *userInitiatedOptions;
@property (readonly, nonatomic) MPCMediaRemoteController *controller;
@property (readonly, nonatomic) MPCPlayerPath *playerPath;
@property (copy, nonatomic) id /* block */ statusTransformer;
@property (copy, nonatomic) NSString *label;

+ (id)initWithSiriUserActivity:(id)a0;

- (id)initWithMediaRemoteCommand:(unsigned int)a0 options:(id)a1 controller:(id)a2 label:(id)a3;
- (void)setCommandOptionValue:(id)a0 forKey:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMediaRemoteCommand:(unsigned int)a0 options:(id)a1 playerPath:(id)a2 label:(id)a3;

@end
