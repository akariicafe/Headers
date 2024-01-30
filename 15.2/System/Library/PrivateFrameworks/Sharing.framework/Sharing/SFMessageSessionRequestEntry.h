@class NSDictionary;

@interface SFMessageSessionRequestEntry : NSObject

@property (nonatomic) BOOL allowUnencrypted;
@property (copy, nonatomic) id /* block */ handler;
@property (copy, nonatomic) NSDictionary *options;

- (void).cxx_destruct;

@end
