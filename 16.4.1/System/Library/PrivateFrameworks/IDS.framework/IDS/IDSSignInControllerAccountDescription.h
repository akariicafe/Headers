@class NSString, NSNumber;

@interface IDSSignInControllerAccountDescription : NSObject

@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSNumber *state;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
