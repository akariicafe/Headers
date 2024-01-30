@class NSObject;
@protocol OS_xpc_object;

@interface PLURIWithHash : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *uri;
@property (nonatomic) unsigned long long uriHash;

- (id)init;
- (void).cxx_destruct;
- (id)initWithXPCURI:(id)a0;

@end
