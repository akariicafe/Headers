@class NSString;

@interface PTCinematographyNetworkSignal : NSObject

@property (readonly) NSString *name;
@property (readonly) unsigned long long count;

+ (id)networkSignalWithModelDictionary:(id)a0;
+ (Class)subclassForName:(id)a0;

- (void).cxx_destruct;
- (BOOL)checkSignalForStream:(id)a0;
- (id)initWithModelDictionary:(id)a0;
- (void)writePayload:(id)a0 toStream:(id)a1;

@end
