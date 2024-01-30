@class NSMethodSignature, NSDictionary;

@interface _NADelegateMethodMetadata : NSObject

@property (retain, nonatomic) NSMethodSignature *methodSignature;
@property (copy, nonatomic) id /* block */ customHandler;
@property (copy, nonatomic) NSDictionary *customLogSettingsByArgumentIndex;

- (void).cxx_destruct;

@end
