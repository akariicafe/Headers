@class NSString, NSDictionary;

@interface PTCinematographyNetworkInputSchema : NSObject

@property (readonly) NSString *name;
@property (readonly) unsigned long long count;
@property (readonly) NSDictionary *params;

- (void).cxx_destruct;
- (id)initWithModelDictionary:(id)a0;

@end
