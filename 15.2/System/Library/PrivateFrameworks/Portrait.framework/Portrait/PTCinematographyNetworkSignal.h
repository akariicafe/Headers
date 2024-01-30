@class NSString;

@interface PTCinematographyNetworkSignal : NSObject

@property (readonly) NSString *name;
@property (readonly) unsigned long long count;

+ (Class)subclassForName:(id)a0;
+ (id)networkSignalWithModelDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithModelDictionary:(id)a0;
- (void)writePayload:(id)a0 toStream:(id)a1;
- (BOOL)checkSignalForStream:(id)a0;

@end
