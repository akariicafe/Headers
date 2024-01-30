@class NSString;

@interface _HDProcessInfo : NSObject

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) unsigned int applicationState;
@property (readonly, nonatomic) int pid;

+ (id)processInfoWithDictionary:(id)a0;

- (void).cxx_destruct;

@end
